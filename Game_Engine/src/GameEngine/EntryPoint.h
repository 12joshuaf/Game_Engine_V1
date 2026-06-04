#pragma once


#ifdef GE_PLATFORM_WINDOWS




extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv) {
 

	GameEngine::Log::Init();
	GE_CORE_INFO("Core logger initialized!");
	GE_CORE_INFO("Client logger initialized!");

	printf("Game Engine\n");
	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;

}

#endif