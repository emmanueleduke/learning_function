#include <stdio.h>
void printArray(int A[][2][2], int size1, int size2, int size3)
{
  int x, y, z;
  for (x = 0; x < size1; x++)
    for (y = 0; y < size2; y++)
      for (z = 0; z < size3; z++)
        printf("%d ", A[x][y][z]);
}

int main()
{
  int A[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};
  printArray(A, 3, 2, 2);
  return 0;
}

