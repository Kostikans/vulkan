#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
    Window(const uint16_t width,const uint16_t height,const std::string title);
    ~Window();

     const bool IsClose() noexcept;

private:
    GLFWwindow* window;
    uint16_t width;
    uint16_t height;
    std::string title;
};