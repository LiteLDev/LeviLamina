////////////////////////////////////////////////////////////////////////
//  Logger System - Log text to console, file and player easily
//  - Created by RimuruChan on 2021/12/11.
//
//
//  [Create Logger]
//
//  Logger logger("MyPlugin");                  // Create a logger (default: only log to console)
//  logger.setFile("logs/MyPlugin.log");        // Optional, also record log to File
//
//  auto pl = mc.getPlayer("Jim");
//  if(pl)
//      logger.setPlayer(pl);                   // Optional, also record log to a Player
//  ......
//  logger.setFile(nullptr);                    // Stop record log to File (Passing nullptr to setPlayer works like
//  this)
//
//
//  [Use Logger]
//
//  logger.info("Infomation");                                  // Common
//  logger.error("Error! Code:{}",GetLastError());              // FMT Format
//  logger.warn << "Warning! Fail to do sth." << logger.endl;   // STL Format
//
////////////////////////////////////////////////////////////////////////

#pragma once

#include "liteloader/api/i18n/I18nAPI.h"
#include "liteloader/api/utils/FileHelper.h"
#include "liteloader/api/utils/PluginOwnData.h"
#include "liteloader/api/utils/StringUtils.h"
#include "liteloader/api/utils/WinHelper.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <mutex>
#include <source_location>
#include <sstream>
#include <string>
#include <utility>

#include "FMT/chrono.h"
#include "FMT/color.h"
#include "FMT/core.h"
#include "FMT/os.h"
#include "FMT/printf.h"

#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"

template <bool B, class T = void>
using enable_if_type = typename std::enable_if<B, T>::type;

class Logger {
public:
    class OutputStream {
        friend class Logger;

    protected:
        LLAPI explicit OutputStream();

    public:
        Logger*            logger{};
        int                level{};
        std::string        consoleFormat;
        std::string        fileFormat;
        std::string        playerFormat;
        fmt::text_style    style;
        std::string        levelPrefix;
        std::ostringstream os;
        bool               locked = false; // Deprecated

        LLAPI explicit OutputStream(
            Logger*           logger,
            int               level,
            std::string&&     consoleFormat,
            std::string&&     fileFormat,
            std::string&&     playerFormat,
            fmt::text_style&& style,
            std::string&&     mode
        );

        template <typename T>
        OutputStream& operator<<(T&& t) {
            std::unique_lock lock(getLocker());
            os << std::forward<T>(t);
            return *this;
        }

        OutputStream& operator<<(std::wstring const& wstr) {
            using ll::StringUtils::wstr2str;
            std::unique_lock lock(getLocker());
            os << wstr2str(wstr);
            return *this;
        }

        OutputStream& operator<<(const wchar_t* wstr) {
            using ll::StringUtils::wstr2str;
            std::unique_lock lock(getLocker());
            os << wstr2str(wstr);
            return *this;
        }

        OutputStream& operator<<(void (*t)(OutputStream&)) {
            t(*this);
            return *this;
        }

        template <typename S, typename... Args, enable_if_type<(fmt::v9::detail::is_string<S>::value), int> = 0>
        void operator()(S const& formatStr, Args const&... args) {
            if constexpr (0 == sizeof...(args)) {
                // Avoid fmt if only one argument
                *this << formatStr << endl;
            } else {
                std::string str = fmt::format(fmt::runtime(formatStr), args...);
                *this << str << endl;
            }
        }

        template <typename... Args>
        void operator()(const char* formatStr, Args const&... args) {
            if constexpr (0 == sizeof...(args)) {
                // Avoid fmt if only one argument
                *this << formatStr << endl;
            } else {
                std::string str = fmt::format(fmt::runtime(std::string(formatStr)), args...);
                *this << str << endl;
            }
        }
    };

private:
    LLAPI static bool setDefaultFileImpl(HMODULE hPlugin, std::string const& logFile, bool appendMode);
    LLAPI static bool setDefaultFileImpl(HMODULE hPlugin, nullptr_t);

    LLAPI static void endlImpl(HMODULE hPlugin, OutputStream& o);

public:
    std::string   title;
    std::ofstream ofs;
    int           consoleLevel = -1;
    int           fileLevel    = -1;
    int           playerLevel  = -1;

    ~Logger() { setFile(nullptr); }

    inline static bool setDefaultFile(std::string const& logFile, bool appendMode) {
        return setDefaultFileImpl(GetCurrentModule(), logFile, appendMode);
    };

    inline static bool setDefaultFile(nullptr_t a0) { return setDefaultFileImpl(GetCurrentModule(), a0); };

    inline static void endl(OutputStream& o) { return endlImpl(GetCurrentModule(), o); };

    LLAPI bool setFile(std::string const& logFile, bool appendMode = true);
    LLAPI bool setFile(nullptr_t);

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    inline Logger() : Logger("") {}
    LLAPI explicit Logger(std::string const& title);

private:
    LLAPI static std::mutex& getLocker();
};
