#include "raylib.h"

int selectionbutton(int x, int y, const char *text, int *begin)
{    
    struct Rectangle r1 = {.x = static_cast<float>(x - 10.0), .y = static_cast<float>(y - 5.0), .width= static_cast<float>(MeasureText(text, 80) + 20), .height= 50};
    if (CheckCollisionPointRec(GetMousePosition(), r1))
    {
        DrawText(text, x, y, 100, BLACK);
        if (IsMouseButtonPressed(0))
        {
            if (*begin == 0)
            {
                *begin = 1;
            }
            else if(*begin == 1)
            {
                *begin = 0;
            }
            return 1;
        }
    }
    else
    {
        DrawText(text, x, y, 80, BLACK);
        return 0;
    }
    return 0;
}


int bubblebutton(int x, int y, const char *text, int *begin)
{    
    struct Rectangle r1 = {.x = static_cast<float>(x - 10), .y = static_cast<float>(y - 5), .width= static_cast<float>(MeasureText(text, 80) + 20), .height= 50};
    if (CheckCollisionPointRec(GetMousePosition(), r1))
    {
        DrawText(text, x, y, 100, BLACK);
        if (IsMouseButtonPressed(0))
        {
            if (*begin == 0)
            {
                *begin = 1;
            }
            else if(*begin == 1)
            {
                *begin = 0;
            }
            return 1;
        }
    }
    else
    {
        DrawText(text, x, y, 80, BLACK);
        return 0;
    }
    return 0;
}


int insertionbutton(int x, int y, const char *text, int *begin)
{    
    struct Rectangle r1 = {.x = static_cast<float>(x - 10), .y = static_cast<float>(y - 5), .width= static_cast<float>(MeasureText(text, 80) + 20), .height= 50};
    if (CheckCollisionPointRec(GetMousePosition(), r1))
    {
        DrawText(text, x, y, 100, BLACK);
        if (IsMouseButtonPressed(0))
        {
            if (*begin == 0)
            {
                *begin = 1;
            }
            else if(*begin == 1)
            {
                *begin = 0;
            }
            return 1;
        }
    }
    else
    {
        DrawText(text, x, y, 80, BLACK);
        return 0;
    }
    return 0;
}


int playagainbutton(int x, int y, const char *text, int *begin)
{    
    struct Rectangle r1 = {.x = static_cast<float>(x - 10), .y = static_cast<float>(y - 5), .width= static_cast<float>(MeasureText(text, 80) + 20), .height= 50};
    if (CheckCollisionPointRec(GetMousePosition(), r1))
    {
        DrawText(text, x - 135, y, 100, BLACK);
        if (IsMouseButtonPressed(0))
        {
            if (*begin == 0)
            {
                *begin = 1;
            }
            else if(*begin == 1)
            {
                *begin = 0;
            }
            return 1;
        }
    }
    else
    {
        DrawText(text, x - 125, y, 80, BLACK);
        return 0;
    }
    return 0;
}


int quitbutton(int x, int y, const char *text, int *begin)
{    
    struct Rectangle r1 = {.x = static_cast<float>(x - 10), .y = static_cast<float>(y - 5), .width= static_cast<float>(MeasureText(text, 80) + 20), .height= 50};
    if (CheckCollisionPointRec(GetMousePosition(), r1))
    {
        DrawText(text, x, y, 100, BLACK);
        if (IsMouseButtonPressed(0))
        {
            if (*begin == 0)
            {
                *begin = 1;
            }
            else if(*begin == 1)
            {
                *begin = 0;
            }
            return 1;
        }
    }
    else
    {
        DrawText(text, x, y, 80, BLACK);
        return 0;
    }
    return 0;
}