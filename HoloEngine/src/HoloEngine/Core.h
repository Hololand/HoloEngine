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

#ifdef HE_DEBUG
	#define HE_ENABLE_ASSERTS
#endif

#ifdef HE_ENABLE_ASSERTS
#define HE_ASSERT(x, ...) { if(!(x)) { HE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define HE_CORE_ASSERT(x, ...) { if(!(x)) { HE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define HE_ASSERT(x, ...)
#define HE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define HE_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)