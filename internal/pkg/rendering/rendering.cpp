#include "rendering.h"

RenderingEngine::RenderingEngine(const std::string appName){
    this->instance = new Instance(appName);
}

RenderingEngine::~RenderingEngine(){
    delete(this->instance);
}