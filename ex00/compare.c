/*
 1.-Los extremos opuestos de cada fila y columna deben sumar un valor comprendido en el intervalo [3, n+1].
 2.-No puede haber esquinas (1,n), y las esquinas con  siempre son (1,1). OK
 3.-Cada borde contiene como mínimo un 1, y como máximo un n.
 */

#include <unistd.h>

void    extremos(int size, int **clues)
{
    int n;
    n = size - 1;
    if (((clues[0][0] + clues[1][0]) < 3 || (clues[0][0] + clues[1][0]) > (size + 1)) || ((clues[0][n] + clues[1][n]) < 3 || (clues[0][n] + clues[1][n]) > (size + 1)) || ((clues[3][0] + clues[3][n]) < 3 || (clues[3][0] + clues[3][n]) > (size + 1)) || ((clues[2][0] + clues[2][n]) < 3 || (clues[2][0] + clues[2][n]) > (size + 1)) )
    {
        write(1, "E", 1);
    }
}

void    one_n(int size, int **clues)
{
    int n;
    n = size - 1;
    if(clues[0][0] == 1 && clues[2][0] != 1 || clues[0][n] == 1 && clues[3][0] != 1 || clues[2][n] == 1 && clues[1][0] != 1 || clues[3][n] == 1 && clues[1][n] != 1 || clues[0][0] != 1 && clues[2][0] == 1 || clues[0][n] != 1 && clues[3][0] == 1 || clues[2][n] != 1 && clues[1][0] == 1 || clues[3][n] != 1 && clues[1][n] == 1)
    {
        write(1, "E", 1);
    }
}

void    onefive(int size, int **clues)
{
    int n;
    n = size - 1;
    if(clues[0][0] == 1 && clues[2][0] == size || clues[0][n] == 1 && clues[3][0] == size || clues[2][n] == 1 && clues[1][0] == size || clues[3][n] == 1 && clues[1][n] == size || clues[0][0] == size && clues[2][0] == 1 || clues[0][n] == size && clues[3][0] == 1 || clues[2][n] == size && clues[1][0] == 1 || clues[3][n] == size && clues[1][n] == 1)
    {
        write(1, "E", 1);
    }
}

void    minmaxborder(int size, int **clues)
{
    int i;
    int j;
    int count1;
    int count2;
    
    i = 0;
    while(i < size)
    {
        j = 0;
        count1 = 0;
        count2 = 0;
        while(j < size)
        {
            if(clues[i][j] == 1)
            {
                count1++;
            }
            if(clues[i][j] == size)
            {
                count2++;
            }
            j++;
        }
        if(count1 < 1 || count2 > 1)
        {
            write(1, "E", 1);
        }
    i++;
    }
}