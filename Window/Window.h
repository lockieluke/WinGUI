//
// Created by Sherlock Luk on 9/4/2020.
//

#pragma once

#include <windows.h>
#include <commctrl.h>
#include <iostream>
#include <functional>

#ifndef WINGUI_API_WINDOW_H

#define WINGUI_API_WINDOW_H

class Window {
private:
    MSG msg = {};
    HWND hwnd;
    std::function<void ()> onCreateWindow;
public:
    Window(const std::function<void ()>& f) : onCreateWindow(f);
    void Init(HINSTANCE hinstance, int nCmdShow);
    void SetTitle(const char* title);
    WPARAM ReturnMsg();
    static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
};

#endif //WINGUI_API_WINDOW_H