#include "raylib.h"

void bubbleSort(int *index, int size, int *color, int *done, int *counter)
{   
    DrawText("O(N^2)", 315, 100, 125, BLACK);
    if ((*counter) < size)
    {
        for (int i = 0;i < size - 1 - (*counter); i++)
        {
            if (index[i] > index[i+1])
            {
                int swapvar = index[i];
                index[i] = index[i + 1];
                index[i + 1] = swapvar;
                color[i] = 0;
                color[i+1] = 0;
            }
            else
            {
                color[i] = 1;
                color[i+1] = 1;
            }
        }
    }
    else
    {
        (*done) = 1;
    }
    (*counter)++;
    
    if (size - (*counter) >= 0)
    {
        color[size - (*counter)] = 2;
    }
}