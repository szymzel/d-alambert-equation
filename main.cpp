#include "raylib.h"
#include "board.h"
#include <iostream>

constexpr int W = 800;
constexpr int H = 600;

int main(){

    Camera3D camera = {0};
    InitWindow(W, H, "D'Alembert's equation");
    ToggleFullscreen();
    SetTargetFPS(60);

    while(!WindowShouldClose()){

        BeginDrawing();
            ClearBackground(BLACK);
            BeginMode3D(camera);
            


            EndMode3D();
        EndDrawing();
    }

    CloseWindow();

}