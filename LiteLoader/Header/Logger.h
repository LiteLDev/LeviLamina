//
// Created by RimuruChan on 2021/12/11.
//

#pragma once

#include <filesystem>
#include "third-party/FMT/chrono.h"
#include "third-party/FMT/color.h"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include "third-party/FMT/printf.h"
#include "Utils/CsLock.h"
#include "Utils/WinHelper.h"
#include "Utils/FileHelper.h"
#include "Utils/PluginOwnData.h"
#include <string>
#include <sstream>
#include <iostream>
#include <utility>

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"
#define LOGGER_CURRENT_LOCK "ll_plugin_logger_lock"

void inline initLock() {
    if (!PluginOwnData::has(LOGGER_CURRENT_LOCK))
        PluginOwnData::set<CsLock>(LOGGER_CURRENT_LOCK);
}

void inline lock() {
    initLock();
    PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).lock();
}

void inline unlock() {
    PluginOwnData::get<CsLock>(LOGGER_CURRENT_LOCK).unlock();
}

class Logger {
public:

    std::string title;

    template<bool B, class T = void>
    using enable_if_t = typename std::enable_if<B, T>::type;

    class endl {
    };

    class output {
        Logger *logger;
        std::string format;
        fmt::text_style style;
        std::string mode;
        std::ostringstream os;
        bool locked = false;

    public:
        explicit output(Logger *logger, std::string &&format, fmt::text_style &&style, std::string &&mode) {
            this->logger = logger;
            this->format = format;
            this->style = style;
            this->mode = mode;
        };

        template<typename T>
        output &operator<<(T &t) {
            if (!locked) {
                lock();
                locked = true;
            }
            os << t;
            return *this;
        }

        template<>
        output &operator<<(endl &t) {
            fmt::print(style, format, fmt::localtime(_time64(nullptr)), mode, logger->title, os.str());
            std::cout.flush();
            locked = false;
            unlock();
            return *this;
        }
    };

    output Debug = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          fmt::fg(fmt::color::gray) | fmt::emphasis::italic,
                          "Debug"
    };
    output Info = output{this,
                         "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                         fmt::fg(fmt::color::white),
                         "Info"
    };
    output Warn = output{this,
                         "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                         fmt::fg(fmt::color::yellow2) | fmt::emphasis::bold,
                         "Warn"
    };
    output Error = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          fmt::fg(fmt::color::red2) | fmt::emphasis::bold,
                          "Error"
    };
    output Fatal = output{this,
                          "\b\b[{:%H:%M:%S} {}][{}] {}\n> ",
                          fmt::fg(fmt::color::red) | fmt::emphasis::bold,
                          "Fatal"
    };

    explicit Logger(std::string &&title) {
        this->title = title;
    }

    static endl endl;

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void debug(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Debug << str << endl;
    }

    template<typename... Args>
    void debug(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Debug << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void info(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Info << str << endl;
    }

    template<typename... Args>
    void info(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Info << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void warn(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Warn << str << endl;
    }

    template<typename... Args>
    void warn(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Warn << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void error(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Error << str << endl;
    }

    template<typename... Args>
    void error(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Error << str << endl;
    }

    template<typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
    void fatal(const S &formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Fatal << str << endl;
    }

    template<typename... Args>
    void fatal(const char *formatStr, const Args &... args) {
        std::string str = fmt::format(formatStr, args...);
        Fatal << str << endl;
    }

};