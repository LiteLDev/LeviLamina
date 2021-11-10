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
	std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Info][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(str);
}

template <typename... Args>
void inline Warn(const std::string& formatStr, const Args&... args)
{
	std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Warning][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, str);
}

template <typename... Args>
void inline Error(const std::string& formatStr, const Args&... args)
{
	std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} Error][Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
}