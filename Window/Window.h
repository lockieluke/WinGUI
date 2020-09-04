//
// Created by Sherlock Luk on 9/4/2020.
//

#pragma once

#include <windows.h>
#include <commctrl.h>
#include <iostream>

#ifndef WINGUI_API_WINDOW_H

#define WINGUI_API_WINDOW_H

class Window {
private:
    MSG msg = {};
    HWND hwnd;
public:
    HWND hwnd;
    Window(HINSTANCE hinstance, int nCmdShow);
    void SetTitle(const char* title);
    WPARAM ReturnMsg();
};

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);


#endif //WINGUI_API_WINDOW_H