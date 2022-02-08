#pragma once
#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif
#include "FMT/chrono.h"
#include "FMT/color.h"
#include "FMT/core.h"
#include "FMT/os.h"
#include "FMT/format.h"
#include <string>

template <typename... Args>
void inline Info(const std::string& formatStr, const Args&... args)
{
    fmt::print(fmt::fg(fmt::color::sky_blue), fmt::format("{:%H:%M:%S}", fmt::localtime(_time64(0))));
    fmt::print(fmt::fg(fmt::color::blue_violet), fmt::format(" INFO ", fmt::localtime(_time64(0))));
	std::string str = fmt::format("[Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(str);
}

template <typename... Args>
void inline Warn(const std::string& formatStr, const Args&... args)
{
    fmt::print(fmt::fg(fmt::color::sky_blue), fmt::format("{:%H:%M:%S}", fmt::localtime(_time64(0))));
    fmt::print(fmt::fg(fmt::terminal_color::bright_yellow), fmt::format(" WARN ", fmt::localtime(_time64(0))));
	std::string str = fmt::format("[Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::yellow2) | fmt::emphasis::bold, str);
}

template <typename... Args>
void inline Error(const std::string& formatStr, const Args&... args)
{
    fmt::print(fmt::fg(fmt::color::sky_blue), fmt::format("{:%H:%M:%S}", fmt::localtime(_time64(0))));
    fmt::print(fmt::fg(fmt::terminal_color::bright_red), fmt::format(" ERROR ", fmt::localtime(_time64(0))));
	std::string str = fmt::format("[Chakra] ", fmt::localtime(_time64(0)));
	str += fmt::format(formatStr, args...);
	str.append(1, '\n');
	fmt::print(fmt::fg(fmt::color::red2) | fmt::emphasis::bold, str);
}