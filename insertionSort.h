#include "raylib.h"

void insertionSort(int *index, int size, int *color, int *done, int *counter)
{
    DrawText("O(N^2)", 315, 100, 125, BLACK);
    int key = index[(*counter)];
    int j = (*counter) - 1;
    
    if ((*counter) < size)
    {
        
        while(j >= 0 && index[j] > key)
        {   
            color[j] = 2;
            color[(*counter)] = 0;
            int temp = index[j+1];
            index[j+1] = index[j];
            index[j] = temp; 
            
            j = j-1;
            
        }
        
        index[j+1] = key;
        color[j] = 1;

    }
    else
    {   
        (*done) = 1;
    }
    
    (*counter)++;
}