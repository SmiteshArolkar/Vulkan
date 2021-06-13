#include "App.h"


void App::mainLoop()
{
	while (!glfwWindowShouldClose(window.winMain))
	{
		glfwPollEvents();
	}
}

void App::cleaup()
{
	vkDestroyInstance(instance.instance,nullptr);
	glfwDestroyWindow(window.winMain);
	glfwTerminate();
}

void App::run()
{

	window.initWindow(800,600);
    instance.initVulkan();
	mainLoop();
	cleaup();
}
