#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    const int screenWidth = 1900;
    const int screenHeight = 900;
    string nameplayer1;
    string nameplayer2;
    bool ingame=true; // in boolian baray ine ke to bazi hast ya na
    bool inlobby1=false; // in boolian baray ine ke to lobby vorodi hast ya na (aval bazi hast)
    bool inlobby2=false; // in boolian baray ine ke to lobby akhar bazi hast ya na
    Color lightGray = {200, 200, 200, 255};
    InitWindow(screenWidth, screenHeight, "game fcp 4031");
    SetTargetFPS(60); 

    while (!WindowShouldClose()) 
    {
        BeginDrawing(); 
        ClearBackground(WHITE); 

        if(ingame){

            // jadval
            DrawRectangle(250, 90, 1200, 700, lightGray);
            DrawRectangle(490, 90, 10, 700, BLACK); 
            DrawRectangle(730, 90, 10, 700, BLACK); 
            DrawRectangle(970, 90, 10, 700, BLACK); 
            DrawRectangle(1210, 90, 10, 700, BLACK); 
            DrawRectangle(250, 200, 1200, 10, BLACK); 
            DrawRectangle(250, 360, 1200, 10, BLACK); 
            DrawRectangle(250, 515, 1200, 10, BLACK); 
            DrawRectangle(250, 675, 1200, 10, BLACK); 
            // back button
            DrawRectangle(1600, 700, 200, 100, RED);
            // player1 button
            DrawRectangle(1600, 500, 200, 100, RED);
            // player2 button
            DrawRectangle(1600, 300, 200, 100, RED);

        }

        if(inlobby1){

            // code lobby vorodi 
        }

        if(inlobby1){

            // code lobby khoroji 
        }



        EndDrawing(); 
    }

    CloseWindow();

    return 0;
}
