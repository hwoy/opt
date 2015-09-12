#include <stdio.h>
#include "opt.h"

#define BSIZE 1024

const char *cptrarr_param[] = { "-a", "-b", "-c", NULL };

int
main (int argc, const char *argv[])
{
  static char carray_buff[BSIZE];
  int i;

  while ((i =
	  opt_action (argc, argv, cptrarr_param, carray_buff, BSIZE,
		      DSTART)) != e_optend)
    {


      switch (i)
	{
	case 0:
	case 1:
	case 2:
	  printf ("%s = %s\n", cptrarr_param[i], carray_buff);
	  break;

	default:
	  printf ("other = %s\n", carray_buff);

	}


    }

  return 0;

}
