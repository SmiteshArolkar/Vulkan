#include"Includes.h"
class VulkanInstance {
private:
	uint32_t glfwExtensionsCount = 0;
	const char** glfwExtensions;
	
	
	void createInstance();
	VkInstance GetInstance() { return instance; }
public:
	VkInstance instance;
	void avialabeExtensions();
	void initVulkan();
};