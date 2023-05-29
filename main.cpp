#include "raylib.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "Buttons.h"

#include <cstdlib>

using namespace std;

int main(void)
{
    // Initialization
    const int screenWidth = 1000;
    const int screenHeight = 650;
    

    InitWindow(screenWidth, screenHeight, "Bubble Sort");

    SetTargetFPS(60);               // Set the application to run at 60 frames-per-second
    
    //Width of the bars
    int n = 4;
    
    //Number of bars
    const int size = 250;
    
    //Array of bars and their state 
    int bar[size], colors[size];

    int counter = 0, done= 0, start1 = 0, start2 = 0, start3 = 0, begin = 0;
    int *countptr = &counter, *doneptr = &done, *beginptr = &begin;
    
    // Main game loop
    
    
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        if (start1 == 1)
        {
            bubbleSort(bar, size, colors, doneptr, countptr);
        }
        if (start2 == 1)
        {
            selectionSort(bar, size, colors, doneptr, countptr);
        }
        if (start3 == 1)
        {
            insertionSort(bar, size, colors, doneptr, countptr);
        }
        Color color = WHITE;
        BeginDrawing();
            ClearBackground(WHITE);
            
            
            
            if (begin == 1)
            {
                for (int i = 0; i < size; i++)
                {
                    if (colors[i] == 0)
                    {
                        color = RED;
                    }
                    else if (colors[i] == 2)
                    {
                        color = GREEN;
                    }
                    else 
                    {
                        color = YELLOW;
                    }
                    DrawRectangle(i*n, screenHeight - bar[i], n, bar[i], color);
                    
                }
                if (done == 1)
                {
                    if (quitbutton(screenWidth / 2 - 80, screenHeight / 2, "Exit", beginptr) == 1)
                    {
                        CloseWindow();
                        return 0;
                    }
                    else if (playagainbutton(screenWidth / 2 - 80, screenHeight / 2 - 100, "Play Again", beginptr) == 1)
                    {
                        begin = 0;
                        done = 0;
                        start1 = 0;
                        start2 = 0;
                        start3 = 0;
                        counter = 0;
                        done = 0;
                        countptr = &counter;
                        doneptr = &done;
                    }
                }
            }
            else 
            {
                for (int i = 0; i < size ; i++)
                {
                    bar[i] = GetRandomValue(100, 400);
                    colors[i] = 1;
                }
                DrawText("Sorting Function", 100, 60, 100, ORANGE);
                DrawText("Visualizer", 250, 165, 100, ORANGE);
                DrawText("Created by Kevin He", 20, 20, 30, BLACK);
                
                start1 = bubblebutton(100, 300, "Bubble Sort", beginptr);
                start2 = selectionbutton(100, 400, "Selection Sort", beginptr);
                start3 = insertionbutton(100, 500, "Insertion Sort", beginptr);
            }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}