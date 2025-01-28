#include <raylib.h>
#include <iostream>
using namespace std;

int main()
{
    const int screenWidth = 1900;
    const int screenHeight = 900;
    string nameplayer1;
    string nameplayer2;
    bool ingame = true;    // in boolian baray ine ke to bazi hast ya na
    bool inlobby1 = false; // in boolian baray ine ke to lobby vorodi hast ya na (aval bazi hast)
    bool inlobby2 = false; // in boolian baray ine ke to lobby akhar bazi hast ya na

    // moteghayer hay ghesmat in game
    Color lightGray = {200, 200, 200, 255};
    Color lightGreen = {144, 238, 144, 255};
    Color lightYellow = {255, 255, 153, 255};
    bool isclick[5][5];
    bool yellow[5][5];
    bool green[5][5];
    bool rafteh[5][5];
    bool rangnanare[5][5];
    bool yellowwin = false;
    bool greenwin = false;
    bool draw = false; // baray mosavi shodan
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            rangnanare[i][j] = true;
            isclick[i][j] = false;
            yellow[i][j] = false;
            green[i][j] = false;
            rafteh[i][j] = false;
        }
    }
    int currentPlayer = 1; // 0 for player1, 1 for player2
    // moteghayer hay ghesmat in game

    InitWindow(screenWidth, screenHeight, "game fcp 4031");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if (ingame)
        {
            // jadval
            DrawRectangle(490, 90, 10, 700, BLACK);
            DrawRectangle(730, 90, 10, 700, BLACK);
            DrawRectangle(970, 90, 10, 700, BLACK);
            DrawRectangle(1210, 90, 10, 700, BLACK);
            DrawRectangle(250, 220, 1200, 10, BLACK);
            DrawRectangle(250, 360, 1200, 10, BLACK);
            DrawRectangle(250, 515, 1200, 10, BLACK);
            DrawRectangle(250, 655, 1200, 10, BLACK);

            // back button
            DrawRectangle(1600, 700, 200, 100, RED);
            // player1 button
            DrawRectangle(1600, 500, 200, 100, lightGreen);
            // player2 button
            DrawRectangle(1600, 300, 200, 100, lightYellow);
            Vector2 mousePos = GetMousePosition();

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 250 && mousePos.x < 490 && mousePos.y > 90 && mousePos.y < 220 && isclick[0][0] == false)
            {
                isclick[0][0] = true;
                if (rangnanare[0][0])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[0][0] = true;
                        green[0][0] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[0][0] = false;
                        green[0][0] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[0][0] = false;
                }
            }

            if (yellow[0][0])
            {
                DrawRectangle(250, 90, 240, 130, lightYellow);
            }
            else if (green[0][0])
            {
                DrawRectangle(250, 90, 240, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 250 && mousePos.x < 490 && mousePos.y > 230 && mousePos.y < 360 && isclick[0][1] == false)
            {
                isclick[0][1] = true;
                if (rangnanare[0][1])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[0][1] = true;
                        green[0][1] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[0][1] = false;
                        green[0][1] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[0][1] = false;
                }
            }

            if (yellow[0][1])
            {
                DrawRectangle(250, 230, 240, 130, lightYellow);
            }
            else if (green[0][1])
            {
                DrawRectangle(250, 230, 240, 130, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 250 && mousePos.x < 490 && mousePos.y > 370 && mousePos.y < 515 && isclick[0][2] == false)
            {
                isclick[0][2] = true;
                if (rangnanare[0][2])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[0][2] = true;
                        green[0][2] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[0][2] = false;
                        green[0][2] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[0][2] = false;
                }
            }

            if (yellow[0][2])
            {
                DrawRectangle(250, 370, 240, 145, lightYellow);
            }
            else if (green[0][2])
            {
                DrawRectangle(250, 370, 240, 145, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 250 && mousePos.x < 490 && mousePos.y > 525 && mousePos.y < 655 && isclick[0][3] == false)
            {
                isclick[0][3] = true;
                if (rangnanare[0][3])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[0][3] = true;
                        green[0][3] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[0][3] = false;
                        green[0][3] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[0][3] = false;
                }
            }

            if (yellow[0][3])
            {
                DrawRectangle(250, 525, 240, 130, lightYellow);
            }
            else if (green[0][3])
            {
                DrawRectangle(250, 525, 240, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 250 && mousePos.x < 490 && mousePos.y > 665 && mousePos.y < 790 && isclick[0][4] == false)
            {
                isclick[0][4] = true;
                if (rangnanare[0][4])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[0][4] = true;
                        green[0][4] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[0][4] = false;
                        green[0][4] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[0][4] = false;
                }
            }

            if (yellow[0][4])
            {
                DrawRectangle(250, 665, 240, 125, lightYellow);
            }
            else if (green[0][4])
            {
                DrawRectangle(250, 665, 240, 125, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 500 && mousePos.x < 740 && mousePos.y > 90 && mousePos.y < 220 && isclick[1][0] == false)
            {
                isclick[1][0] = true;
                if (rangnanare[1][0])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[1][0] = true;
                        green[1][0] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[1][0] = false;
                        green[1][0] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[1][0] = false;
                }
            }

            if (yellow[1][0])
            {
                DrawRectangle(500, 90, 230, 130, lightYellow);
            }
            else if (green[1][0])
            {
                DrawRectangle(500, 90, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 500 && mousePos.x < 740 && mousePos.y > 230 && mousePos.y < 360 && isclick[1][1] == false)
            {
                isclick[1][1] = true;
                if (rangnanare[1][1])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[1][1] = true;
                        green[1][1] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[1][1] = false;
                        green[1][1] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[1][1] = false;
                }
            }

            if (yellow[1][1])
            {
                DrawRectangle(500, 230, 230, 130, lightYellow);
            }
            else if (green[1][1])
            {
                DrawRectangle(500, 230, 230, 130, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 500 && mousePos.x < 740 && mousePos.y > 370 && mousePos.y < 515 && isclick[1][2] == false)
            {
                isclick[1][2] = true;
                if (rangnanare[1][2])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[1][2] = true;
                        green[1][2] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[1][2] = false;
                        green[1][2] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[1][2] = false;
                }
            }

            if (yellow[1][2])
            {
                DrawRectangle(500, 370, 230, 145, lightYellow);
            }
            else if (green[1][2])
            {
                DrawRectangle(500, 370, 230, 145, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 500 && mousePos.x < 740 && mousePos.y > 525 && mousePos.y < 655 && isclick[1][3] == false)
            {
                isclick[1][3] = true;
                if (rangnanare[1][3])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[1][3] = true;
                        green[1][3] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[1][3] = false;
                        green[1][3] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[1][3] = false;
                }
            }

            if (yellow[1][3])
            {
                DrawRectangle(500, 525, 230, 130, lightYellow);
            }
            else if (green[1][3])
            {
                DrawRectangle(500, 525, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 500 && mousePos.x < 740 && mousePos.y > 665 && mousePos.y < 790 && isclick[1][4] == false)
            {
                isclick[1][4] = true;
                if (rangnanare[1][4])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[1][4] = true;
                        green[1][4] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[1][4] = false;
                        green[1][4] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[1][4] = false;
                }
            }
            if (yellow[1][4])
            {
                DrawRectangle(500, 665, 230, 125, lightYellow);
            }
            else if (green[1][4])
            {
                DrawRectangle(500, 665, 230, 125, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 740 && mousePos.x < 980 & mousePos.y > 90 && mousePos.y < 220 && isclick[2][0] == false)
            {
                isclick[2][0] = true;
                if (rangnanare[2][0])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[2][0] = true;
                        green[2][0] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[2][0] = false;
                        green[2][0] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[2][0] = false;
                }
            }

            if (yellow[2][0])
            {
                DrawRectangle(740, 90, 230, 130, lightYellow);
            }
            else if (green[2][0])
            {
                DrawRectangle(740, 90, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 740 && mousePos.x < 980 && mousePos.y > 230 && mousePos.y < 360 && isclick[2][1] == false)
            {
                isclick[2][1] = true;
                if (rangnanare[2][1])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[2][1] = true;
                        green[2][1] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[2][1] = false;
                        green[2][1] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[2][1] = false;
                }
            }

            if (yellow[2][1])
            {
                DrawRectangle(740, 230, 230, 130, lightYellow);
            }
            else if (green[2][1])
            {
                DrawRectangle(740, 230, 230, 130, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 740 && mousePos.x < 980 && mousePos.y > 370 && mousePos.y < 515 && isclick[2][2] == false)
            {
                isclick[2][2] = true;
                if (rangnanare[2][2])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[2][2] = true;
                        green[2][2] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[2][2] = false;
                        green[2][2] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[2][2] = false;
                }
            }

            if (yellow[2][2])
            {
                DrawRectangle(740, 370, 230, 145, lightYellow);
            }
            else if (green[2][2])
            {
                DrawRectangle(740, 370, 230, 145, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 740 && mousePos.x < 980 && mousePos.y > 525 && mousePos.y < 655 && isclick[2][3] == false)
            {
                isclick[2][3] = true;
                if (rangnanare[2][3])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[2][3] = true;
                        green[2][3] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[2][3] = false;
                        green[2][3] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[2][3] = false;
                }
            }

            if (yellow[2][3])
            {
                DrawRectangle(740, 525, 230, 130, lightYellow);
            }
            else if (green[2][3])
            {
                DrawRectangle(740, 525, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 740 && mousePos.x < 980 && mousePos.y > 665 && mousePos.y < 790 && isclick[2][4] == false)
            {
                isclick[2][4] = true;
                if (rangnanare[2][4])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[2][4] = true;
                        green[2][4] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[2][4] = false;
                        green[2][4] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[2][4] = false;
                }
            }
            if (yellow[2][4])
            {
                DrawRectangle(740, 665, 230, 125, lightYellow);
            }
            else if (green[2][4])
            {
                DrawRectangle(740, 665, 230, 125, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 980 && mousePos.x < 1220 && mousePos.y > 90 && mousePos.y < 220 && isclick[3][0] == false)
            {
                isclick[3][0] = true;
                if (rangnanare[3][0])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[3][0] = true;
                        green[3][0] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[3][0] = false;
                        green[3][0] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[3][0] = false;
                }
            }

            if (yellow[3][0])
            {
                DrawRectangle(980, 90, 230, 130, lightYellow);
            }
            else if (green[3][0])
            {
                DrawRectangle(980, 90, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 980 && mousePos.x < 1220 && mousePos.y > 230 && mousePos.y < 360 && isclick[3][1] == false)
            {
                isclick[3][1] = true;
                if (rangnanare[3][1])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[3][1] = true;
                        green[3][1] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[3][1] = false;
                        green[3][1] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[3][1] = false;
                }
            }

            if (yellow[3][1])
            {
                DrawRectangle(980, 230, 230, 130, lightYellow);
            }
            else if (green[3][1])
            {
                DrawRectangle(980, 230, 230, 130, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 980 && mousePos.x < 1220 && mousePos.y > 370 && mousePos.y < 515 && isclick[3][2] == false)
            {
                isclick[3][2] = true;
                if (rangnanare[3][2])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[3][2] = true;
                        green[3][2] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[3][2] = false;
                        green[3][2] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[3][2] = false;
                }
            }

            if (yellow[3][2])
            {
                DrawRectangle(980, 370, 230, 145, lightYellow);
            }
            else if (green[3][2])
            {
                DrawRectangle(980, 370, 230, 145, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 980 && mousePos.x < 1220 && mousePos.y > 525 && mousePos.y < 655 && isclick[3][3] == false)
            {
                isclick[3][3] = true;
                if (rangnanare[3][3])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[3][3] = true;
                        green[3][3] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[3][3] = false;
                        green[3][3] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[3][3] = false;
                }
            }

            if (yellow[3][3])
            {
                DrawRectangle(980, 525, 230, 130, lightYellow);
            }
            else if (green[3][3])
            {
                DrawRectangle(980, 525, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 980 && mousePos.x < 1220 && mousePos.y > 665 && mousePos.y < 790 && isclick[3][4] == false)
            {
                isclick[3][4] = true;
                if (rangnanare[3][4])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[3][4] = true;
                        green[3][4] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[3][4] = false;
                        green[3][4] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[3][4] = false;
                }
            }
            if (yellow[3][4])
            {
                DrawRectangle(980, 665, 230, 125, lightYellow);
            }
            else if (green[3][4])
            {
                DrawRectangle(980, 665, 230, 125, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 1220 && mousePos.x < 1460 && mousePos.y > 90 && mousePos.y < 220 && isclick[4][0] == false)
            {
                isclick[4][0] = true;
                if (rangnanare[4][0])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[4][0] = true;
                        green[4][0] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[4][0] = false;
                        green[4][0] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[4][0] = false;
                }
            }

            if (yellow[4][0])
            {
                DrawRectangle(1220, 90, 230, 130, lightYellow);
            }
            else if (green[4][0])
            {
                DrawRectangle(1220, 90, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 1220 && mousePos.x < 1460 && mousePos.y > 230 && mousePos.y < 360 && isclick[4][1] == false)
            {
                isclick[4][1] = true;
                if (rangnanare[4][1])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[4][1] = true;
                        green[4][1] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[4][1] = false;
                        green[4][1] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[4][1] = false;
                }
            }

            if (yellow[4][1])
            {
                DrawRectangle(1220, 230, 230, 130, lightYellow);
            }
            else if (green[4][1])
            {
                DrawRectangle(1220, 230, 230, 130, lightGreen);
            }

            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 1220 && mousePos.x < 1460 && mousePos.y > 370 && mousePos.y < 515 && isclick[4][2] == false)
            {
                isclick[4][2] = true;
                if (rangnanare[4][2])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[4][2] = true;
                        green[4][2] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[4][2] = false;
                        green[4][2] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[4][2] = false;
                }
            }

            if (yellow[4][2])
            {
                DrawRectangle(1220, 370, 230, 145, lightYellow);
            }
            else if (green[4][2])
            {
                DrawRectangle(1220, 370, 230, 145, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 1220 && mousePos.x < 1460 && mousePos.y > 525 && mousePos.y < 655 && isclick[4][3] == false)
            {
                isclick[4][3] = true;
                if (rangnanare[4][3])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[4][3] = true;
                        green[4][3] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[4][3] = false;
                        green[4][3] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[4][3] = false;
                }
            }

            if (yellow[4][3])
            {
                DrawRectangle(1220, 525, 230, 130, lightYellow);
            }
            else if (green[4][3])
            {
                DrawRectangle(1220, 525, 230, 130, lightGreen);
            }
            if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && mousePos.x > 1220 && mousePos.x < 1460 && mousePos.y > 665 && mousePos.y < 790 && isclick[4][4] == false)
            {
                isclick[4][4] = true;
                if (rangnanare[3][4])
                {
                    if (currentPlayer == 0)
                    {
                        yellow[4][4] = true;
                        green[4][4] = false;
                        currentPlayer = 1;
                    }
                    else if (currentPlayer == 1)
                    {
                        yellow[4][4] = false;
                        green[4][4] = true;
                        currentPlayer = 0;
                    }
                    rangnanare[4][4] = false;
                }
            }
            if (yellow[4][4])
            {
                DrawRectangle(1220, 665, 230, 125, lightYellow);
            }
            else if (green[4][4])
            {
                DrawRectangle(1220, 665, 230, 125, lightGreen);
            }

            // back button
            DrawRectangle(1600, 700, 200, 100, RED);
            // player1 button
            if (currentPlayer == 1)
            {
                DrawRectangle(1600, 500, 200, 100, lightGreen);
                DrawRectangle(1600, 300, 200, 100, lightGray);
            }
            // player2 button
            else if (currentPlayer == 0)
            {
                DrawRectangle(1600, 300, 200, 100, lightYellow);
                DrawRectangle(1600, 500, 200, 100, lightGray);
            }

            for (int i = 0; i < 5; i++)
            {
                if (yellow[i][0] && yellow[i][1] && yellow[i][2] && yellow[i][3] && yellow[i][4])
                {
                    yellowwin = true;
                    ingame = false;
                    inlobby2 = true;
                }
                if (green[i][0] && green[i][1] && green[i][2] && green[i][3] && green[i][4])
                {
                    yellowwin = true;
                    ingame = false;
                    inlobby2 = true;
                }
                if (yellow[0][i] && yellow[1][i] && yellow[2][i] && yellow[3][i] && yellow[4][i])
                {
                    yellowwin = true;
                    ingame = false;
                    inlobby2 = true;
                }
                if (green[0][i] && green[1][i] && green[2][i] && green[3][i] && green[4][i])
                {
                    yellowwin = true;
                    ingame = false;
                    inlobby2 = true;
                }
            }

            if ((yellow[0][0] && yellow[1][1] && yellow[2][2] && yellow[3][3] && yellow[4][4]) || (yellow[4][0] && yellow[3][1] && yellow[2][2] && yellow[1][3] && yellow[0][4]))
            {
                yellowwin = true;
                ingame = false;
                inlobby2 = true;
            }
            if ((green[0][0] && green[1][1] && green[2][2] && green[3][3] && green[4][4]) || (green[4][0] && green[3][1] && green[2][2] && green[1][3] && green[0][4]))
            {
                greenwin = true;
                ingame = false;
                inlobby2 = true;
            }
            int finished = 0;
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if ((yellow[i][j] || green[i][j]) && rafteh[i][j] == false)
                    {
                        finished++;
                        rafteh[i][j] = true;
                    }
                }
            }
            if (finished==25 && greenwin == false && yellowwin == false)
            {
                draw = true;
                ingame = false;
                inlobby2 = true;
            }
        }

        if (inlobby1)
        {

            // code lobby vorodi
        }

        if (inlobby2)
        {

            // code lobby khoroji
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
