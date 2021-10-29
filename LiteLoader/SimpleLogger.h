#pragma once
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/os.h>
#include <fstream>
#include <mutex>
#include <string>

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif // !FMT_HEADER_ONLY

template <bool B, class T = void>
using enable_if_t = typename std::enable_if<B, T>::type;
namespace Logger {
std::ofstream* LogFile;
std::mutex     Lock;
template <typename S, typename... Args,
          enable_if_t<(fmt::v7::detail::is_string<S>::value), int> = 0>
void Info(const S& format_str, const Args&... args) {
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} INFO] {}\n", fmt::localtime(_time64(0)), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(tmp);
    if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }
    Lock.unlock();
}
template <typename S, typename... Args,
          enable_if_t<(fmt::v7::detail::is_string<S>::value), int> = 0>
void Error(const S& format_str, const Args&... args) {
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} ERROR] {}\n", fmt::localtime(_time64(0)), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, tmp);
    if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }
    Lock.unlock();
}
template <typename S, typename... Args,
          enable_if_t<(fmt::v7::detail::is_string<S>::value), int> = 0>
void Warn(const S& format_str, const Args&... args) {
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} WARN] {}\n", fmt::localtime(_time64(0)), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, tmp);
    if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }
    Lock.unlock();
}
}; // namespace Logger