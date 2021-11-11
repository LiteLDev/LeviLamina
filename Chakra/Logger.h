#pragma once
#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif
#include "fmt/chrono.h"
#include "fmt/color.h"
#include "fmt/core.h"
#include "fmt/os.h"
#include "FMT/format.h"
#include <string>

template <typename... Args>
void inline Info(const std::string& formatStr, const Args&... args)
{
	std::string str = fmt::format("[{:%H:%M:%S} INFO][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(str);
}

template <typename... Args>
void inline Warn(const std::string& formatStr, const Args&... args)
{
	std::string str = fmt::format("[{:%H:%M:%S} WARN][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::yellow2) | fmt::emphasis::bold, str);
}

template <typename... Args>
void inline Error(const std::string& formatStr, const Args&... args)
{
	std::string str = fmt::format("[{:%H:%M:%S} ERROR][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::red2) | fmt::emphasis::bold, str);
}