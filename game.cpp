#include <raylib.h>
#include <iostream>
int main()
{
    const int screenWidth = 1900;
    const int screenHeight = 900;
    string nameplayer1;
    string nameplayer2;
    bool ingame=false; // in boolian baray ine ke to bazi hast ya na
    bool inlobby1=true; // in boolian baray ine ke to lobby vorodi hast ya na (aval bazi hast)
    bool inlobby2=false; // in boolian baray ine ke to lobby akhar bazi hast ya na

    InitWindow(screenWidth, screenHeight, "game fcp 4031");
    SetTargetFPS(60); 

    while (!WindowShouldClose()) 
    {
        BeginDrawing(); 
        ClearBackground(WHITE); 

        if(ingame){

            // code bazi 
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
