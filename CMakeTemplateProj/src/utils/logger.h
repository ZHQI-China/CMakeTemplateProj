#pragma once

#include <spdlog/spdlog.h>

#define LogLevel(x) spdlog::set_level(spdlog::level::x)

#define LogTrace(...)	spdlog::trace(__VA_ARGS__)
#define LogInfo(...)	spdlog::info(__VA_ARGS__)
#define LogDebug(...)	spdlog::debug(__VA_ARGS__)
#define LogWarn(...)	spdlog::warn(__VA_ARGS__)
#define LogError(...)	spdlog::error(__VA_ARGS__)


//截取文件名称：windows: '\\'  Linux: '/'
#define __FILENAME__ (strrchr(__FILE__, '\\') ? (strrchr(__FILE__, '\\') + 1):__FILE__)

// 辅助宏：处理带位置的日志
#define LOG_WITH_LOCATION(level, ...) \
    spdlog::level("-[{}:{} | {}]- {}",__FILENAME__, __LINE__, __func__,fmt::format(__VA_ARGS__))

// 定义带位置的日志宏// L: location
#define LogTraceL(...) LOG_WITH_LOCATION(trace, __VA_ARGS__)
#define LogInfoL(...)  LOG_WITH_LOCATION(info, __VA_ARGS__)
#define LogDebugL(...) LOG_WITH_LOCATION(debug, __VA_ARGS__)
#define LogWarnL(...)  LOG_WITH_LOCATION(warn, __VA_ARGS__)
#define LogErrorL(...) LOG_WITH_LOCATION(error, __VA_ARGS__)

// todo: 写入日志文件