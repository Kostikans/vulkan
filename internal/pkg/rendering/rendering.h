#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#pragma once

#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <vector>

#include <iostream>
#include "instance/instance.h"
#include "window/window.h"

class RenderingEngine {
public:
    RenderingEngine(const std::string appName);
    ~RenderingEngine();
private:
    Instance *instance;    
};