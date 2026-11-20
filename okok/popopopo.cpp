#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

HWND hButton;

LRESULT CALLBACK WindowProc(
    HWND hwnd,
    UINT msg,
    WPARAM wParam,
    LPARAM lParam)
{
    switch (msg)
    {
    case WM_CREATE:
    {
        srand(time(0));

        hButton = CreateWindowA(
            "BUTTON",
            "Натисни мене!",
            WS_CHILD | WS_VISIBLE,
            100, 100, 120, 40,
            hwnd,
            (HMENU)1,
            NULL,
            NULL
        );

        break;
    }

    case WM_COMMAND:
    {
        if (LOWORD(wParam) == 1)
        {
            RECT rect;
            GetClientRect(hwnd, &rect);

            int maxX = rect.right - 120;
            int maxY = rect.bottom - 40;

            int x = rand() % (maxX + 1);
            int y = rand() % (maxY + 1);

            MoveWindow(
                hButton,
                x, y,
                120, 40,
                TRUE
            );
        }

        break;
    }

    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE,
    LPSTR,
    int nCmdShow)
{
    WNDCLASSA wc = {};

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "MovingButtonWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClassA(&wc);

    HWND hwnd = CreateWindowA(
        "MovingButtonWindow",
        "Moving Button",
        WS_OVERLAPPEDWINDOW,
        300, 200, 500, 400,
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};

    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
