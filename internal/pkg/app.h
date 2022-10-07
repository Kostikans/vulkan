#pragma once
#include "rendering/rendering.h"
#include "rendering/window/window.h"

class App {
public:
    App(const uint16_t width,const uint16_t height,const std::string name);
    ~App();
    void Loop() noexcept;

private:
    Window *window;
    RenderingEngine *render;
};