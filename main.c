#include <stdio.h>
#include "opt.h"

#define BSIZE 1024

const char *cptrarr_param[] = { "-a:", "-b:", "-c", NULL };

int
main (int argc, const char *argv[])
{
  static char carray_buff[BSIZE];
  int i;
  unsigned int ui_cindex;

  for (ui_cindex = DSTART; (i =
		       opt_action (argc, argv, cptrarr_param, carray_buff,
				   BSIZE, DSTART)) != e_optend; ui_cindex++)
    {


      switch (i)
	{
	case 0:
	case 1:
	case 2:
	  printf ("%u: paramindex:%u %s = %s\n", ui_cindex, i,
		  cptrarr_param[i], carray_buff);
	  break;

	default:
	  printf ("%u: other = %s\n", ui_cindex, carray_buff);

	}


    }

  return 0;

}
