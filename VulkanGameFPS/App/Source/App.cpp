#include "Core/Core.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <vec4.hpp>
#include <mat4x4.hpp>

#include <iostream>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;


class GiveMeMyTriangleApp {
public:
    void Run() {
        InitVulkan();
        MainLoop();
        Cleanup();
    }

private:
    void InitVulkan() {

    }

    void MainLoop() {

    }

    void Cleanup() {

    }
};



int main() {
	//Core::PrintHelloWorld();
    GiveMeMyTriangleApp app;

    try {
        app.Run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
