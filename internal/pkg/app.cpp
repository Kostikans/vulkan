#include "app.h"

App::App(const uint16_t width,const uint16_t height,const std::string name){
    this->window = new Window(width,height,name);
    this->render = new RenderingEngine(name);
}

App::~App(){
    delete(this->render);
    delete(this->window);
}

void App::Loop() noexcept {
    while(!window->IsClose()){
        glfwPollEvents();


    }
}