#include "window.h"

Window::Window(const uint16_t width,const uint16_t height,const std::string title) {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE,GLFW_FALSE);

    this->width = width;
    this->height = height;
    this->title = title;
    this->window = glfwCreateWindow(width,height,title.c_str(),nullptr,nullptr);
}

Window::~Window(){
    glfwDestroyWindow(window);
    glfwTerminate();
}

const bool Window::IsClose() noexcept {
    return glfwWindowShouldClose(window);
}