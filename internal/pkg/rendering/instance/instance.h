#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

class Instance {
public: 
    Instance(const std::string appName);
    ~Instance();

private:
    VkInstance *instance;
}; 