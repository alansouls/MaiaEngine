#pragma once

#include "Application.h"

namespace MaiaEngine {
	Application* GetApplication();
}


#ifdef ME_PLATFORM_WINDOWS

extern MaiaEngine::Application* MaiaEngine::GetApplication();

int main()
{
	auto app = MaiaEngine::GetApplication();
	app->Run();
	delete app;
	return 0;
}

#endif