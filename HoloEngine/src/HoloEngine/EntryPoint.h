#pragma once

#ifdef HE_PLATFORM_WINDOWS

extern HoloEngine::Application* HoloEngine::CreateApplication();

int main(int argc, char** argv)
{
	HoloEngine::Log::Init();
	HE_CORE_WARN("Initialized Log!");
	int a = 5;
	HE_INFO("Hello! Var ={0}!", a);
	auto app = HoloEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif