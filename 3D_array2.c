#include <stdio.h>
void print_array(int A[3][2][2])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            for (int z = 0; z < 2; z++)
            {
                printf("%d ", A[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main()
{
    int A[3][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}, {{9, 10}, {11, 12}}};
    print_array(A);
    return 0;
}

