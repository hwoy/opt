#define DSTART 1
#define DUPINDEX -1

enum __opt__
{
  e_optother = -1, e_optend = -2
};

int opt_action (int argc, const char *argv[], const char *param[], char *buff,
		unsigned int bsize, int start);

int opt_getIndex (void);

void opt_setIndex (int index);

void opt_resetIndex (void);
