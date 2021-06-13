#include "window.h"

void Window::initWindow(uint32_t width,uint32_t hieght)
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API,GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	winMain = glfwCreateWindow(width, hieght, "App", nullptr, nullptr);
	std::cout << "window is created";
}
