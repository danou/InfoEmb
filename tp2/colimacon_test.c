/// TP2 - Daniel RESENDE
#include"colimacon.h"

int main(int argc, char** argv)
{
  int n, m;
  int ** tab;

  if(argc < 3)
  {
    fprintf(stderr, "Too mutch arguments\n");
    return -1;
  }

  if(atoi(argv[1]) < 0)
  {
    fprintf(stderr, "N is not a positive interger\n");
    return -1;
  }

  if(atoi(argv[2]) < 0)
  {
    fprintf(stderr, "M is not a positive interger\n");
    return -1;
  }

  n = atoi(argv[1]);
  m = atoi(argv[2]);

  if(((n * m) / n) != m)
  {
    fprintf(stderr, "N * M is too big\n");
    return -1;
  }

  if(tab_init(n, m, tab) == -1)
    return -1;

  // Print the table
  printf("This is the colimacon of %d x %d :\n", n, m);
  tab_print(n, m, tab);

  return 0;
}
