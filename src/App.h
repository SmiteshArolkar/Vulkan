
#include "window.h"
#include "Invulk.h"

class App {
private:
	Window window;
	VulkanInstance instance;
	void mainLoop();
	void cleaup();
public:
	void run();
};