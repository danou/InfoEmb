/// TP2 - Daniel RESENDE
#include"colimacon.h"

int
tab_init(const int n, const int m, int ** tab)
{
  tab = (int**)malloc(n * sizeof(int*));

  if(tab == NULL)
  {
    fprintf(stderr, "Error memory");
    return -1;
  }

  for(int i = 0; i < n; i++)
  {
    tab[i] =(int*)malloc(m * sizeof(int));
    if(tab[i] == NULL)
    {
      fprintf(stderr, "Error memory");
      return -1;
    }
  }

    return 0;
}


void
tab_print(const int n, const int m, int ** tab)
{
  for(int row = 0; row < n; row++)
  {
    for(int col = 0; col < m; col++)
    {
      printf("%d ", tab[row][col]);
    }
      printf("\n");
  }
}


void
colimacon(const int n, const int m, int ** tab)
{
  int row = 0, col = 0, cpt = 0;

    // Increment the 1st row
    for(col = 0; col < (m - 2); col++)
    {
      tab[row][col] = cpt;
      cpt++;
    }

    // Increment the last column
    col = m - 1;
    for(row = 0; col < (n - 2); col++)
    {
      tab[row][col] = cpt;
      cpt++;
    }

    // Increment the last rows
    row = n - 1;
    for(col = m - 1; col > 0; col--)
    {
      tab[row][col] = cpt;
      cpt++;
    }

    // Increment the 1st column
    col = 0;
    for(row = n - 1 ; row > 0 ; row--)
    {
      tab[row][col] = cpt;
      cpt++;
    }
}
