#include <stdio.h>
#include "opt.h"

const char *param[] = { "-a", "-b", "-c", NULL };

int
main (int argc, const char *argv[])
{
  static char buff[1024];
  int i;

  while ((i = opt_action (argc, argv, param, buff, 1)) != e_optend)
    {


      switch (i)
	{
	case 0:
	case 1:
	case 2:
	  printf ("%s = %s\n", param[i], buff);
	  break;

	default:
	  printf ("other = %s\n", buff);

	}


    }

  return 0;

}
