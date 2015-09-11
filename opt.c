#include <string.h>
#include <stdio.h>
#include "opt.h"

static int upindex = -1;

int
opt_action (int argc, const char *argv[], const char *param[], char *buff,
	    int start)
{
  int i, j, k, l;

  buff[0] = 0;


  for (j = (upindex >= 0) ? upindex : start; j < argc; j++)
    {

      for (i = 0; param[i]; i++)
	{

	  if (!(strncmp (argv[j], param[i], strlen (param[i]))))
	    {
	      for (k = 0, l = strlen (param[i]); argv[j][l]; k++, l++)
		{
		  buff[k] = argv[j][l];
		}
	      buff[k] = 0;
	      upindex = j + 1;
	      return i;
	    }
	}

      for (k = 0, l = 0; argv[j][l]; k++, l++)
	{
	  buff[k] = argv[j][l];
	}
      buff[k] = 0;
      upindex = j + 1;
      return -1;



    }
  return -2;
}

int
opt_getindex (void)
{
  return upindex;
}

void
opt_setindex (int index)
{
  upindex = index;
}
