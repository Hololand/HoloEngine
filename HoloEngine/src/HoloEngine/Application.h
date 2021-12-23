#pragma once

#include "Core.h"

namespace HoloEngine {
	class HOLOENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}



