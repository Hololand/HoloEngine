#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace HoloEngine {
	class HOLOENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core log macros
#define HE_CORE_TRACE(...) ::HoloEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HE_CORE_INFO(...)  ::HoloEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HE_CORE_WARN(...)  ::HoloEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HE_CORE_ERROR(...) ::HoloEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HE_CORE_FATAL(...) ::HoloEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define HE_TRACE(...)      ::HoloEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HE_INFO(...)       ::HoloEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define HE_WARN(...)       ::HoloEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HE_ERROR(...)      ::HoloEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define HE_FATAL(...)      ::HoloEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)