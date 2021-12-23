#pragma once

#ifdef HE_PLATFORM_WINDOWS

extern HoloEngine::Application* HoloEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = HoloEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif