#include "hepch.h"
#include "Application.h"

#include "HoloEngine/Events/ApplicationEvent.h"
#include "HoloEngine/Log.h"

namespace HoloEngine {

	HoloEngine::Application::Application()
	{
	}

	HoloEngine::Application::~Application()
	{
	}
	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			HE_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			HE_TRACE(e);
		}
		while (true);
	}
}


