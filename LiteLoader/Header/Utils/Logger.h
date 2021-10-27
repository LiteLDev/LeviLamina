#pragma once
#include <Global.h>
#include <string>
#include <ctime>
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/os.h>
#include <Utils/CsLock.h>
#include <fstream>

LIAPI extern CsLock Lock;

namespace Logger 
{
    template <typename... Args>
    LIAPI void log(const std::string& format_str, const Args&... args);

    template <typename... Args>
    LIAPI void log(const char* format_str, const Args&... args);


    template <typename... Args>
    LIAPI void info(const std::string& format_str, const Args&... args);

    template <typename... Args>
    LIAPI void info(const char* format_str, const Args&... args);


    template <typename... Args>
    LIAPI void warn(const std::string& format_str, const Args&... args);

    template <typename... Args>
    LIAPI void warn(const char* format_str, const Args&... args);


    template <typename... Args>
    LIAPI void error(const std::string& format_str, const Args&... args);

    template <typename... Args>
    LIAPI void error(const char* format_str, const Args&... args);
}























template <typename... Args>
void Logger::log(const std::string& format_str, const Args&... args) {
    std::string tmp = fmt::format("{}\n", fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::log(const char* format_str, const Args&... args) {
    std::string tmp = fmt::format("{}\n", fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::info(const std::string& format_str, const Args&... args) {
    auto        ti  = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} INFO] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::info(const char* format_str, const Args&... args) {
    auto        ti  = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} INFO] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::error(const std::string& format_str, const Args&... args) {
    auto        ti  = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} ERROR] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::error(const char* format_str, const Args&... args) {
    auto        ti  = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} ERROR] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::warn(const std::string& format_str, const Args&... args) {
    auto        ti  = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} WARN] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}

template <typename... Args>
void Logger::warn(const char* format_str, const Args&... args) {
    auto ti = _time64(0);
    std::string tmp = fmt::format("[{:%Y-%m-%d %H:%M:%S:%MS} WARN] {}\n", _localtime64(&ti), fmt::format(format_str, args...));
    Lock.lock();
    fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, tmp);
    /* if (LogFile) {
        *LogFile << tmp;
        LogFile->flush();
    }*/
    Lock.unlock();
}