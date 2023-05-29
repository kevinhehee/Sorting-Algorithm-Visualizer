#include "raylib.h"

void selectionSort(int *index, int size, int *color, int *done, int *counter)
{
    DrawText("O(N^2)", 315, 100, 125, BLACK);
    if ((*counter) < size)
    {
        int minindex = (*counter);
        for (int i = (*counter)+1; i < size; i++)
        {
            if (index[minindex] > index[i])
            {
                minindex = i;
                color[i] = 0;
            }
            else
            {
                color[i] = 1;
                color[minindex] = 1;
            }
        }
        int swapvar = index[(*counter)];
        index[(*counter)] = index[minindex];
        index[minindex] = swapvar;
    }
    else
    {
        (*done) = 1;
    }
    (*counter)++;
    
    if ((*counter) - 1< size)
    {
        color[(*counter) - 1] = 2;
    }
}