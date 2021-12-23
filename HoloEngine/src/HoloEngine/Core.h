#pragma once

#ifdef HE_PLATFORM_WINDOWS
	#ifdef HE_BUILD_DLL
		#define HOLOENGINE_API __declspec(dllexport)
	#else
		#define HOLOENGINE_API __declspec(dllimport)
	#endif
#else
	#error HoloEngine only supports Windows!
#endif
