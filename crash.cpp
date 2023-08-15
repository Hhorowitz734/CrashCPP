#include <stdio.h>
#include <iostream>
#include "/opt/homebrew/Cellar/raylib/4.5.0/include/raylib.h"

//cd "/Users/bhorowitz/Documents/CPLUSPLUS/Crash/" && g++ crash.cpp -o crash -I/opt/homebrew/Cellar/raylib/4.5.0/include -L/opt/homebrew/lib -lraylib -std=c++11 && "/Users/bhorowitz/Documents/CPLUSPLUS/Crash/crash"

int main()
{
    // Initialize the window and set the frame rate
    InitWindow(600, 600, "Crash");
    SetTargetFPS(60);
    ClearBackground(BLACK);

    // Main game loop
    while (!WindowShouldClose())
    {

        // Clear the screen
        BeginDrawing();
        ClearBackground(BLACK);

      


        EndDrawing();
        
    }

    // Clean up and exit
    CloseWindow();
    return 0;
}