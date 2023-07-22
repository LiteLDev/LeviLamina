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

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

#include <filesystem>
#include <FMT/chrono.h>
#include <FMT/color.h>
#include <FMT/core.h>
#include <FMT/os.h>
#include <FMT/printf.h>
#include "llapi/utils/CsLock.h"
#include "llapi/utils/WinHelper.h"
#include "llapi/utils/FileHelper.h"
#include "llapi/utils/PluginOwnData.h"
#include "llapi/utils/StringHelper.h"
#include "llapi/I18nAPI.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <utility>

class Player;

#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"

template <bool B, class T = void>
using enable_if_type = typename std::enable_if<B, T>::type;

HMODULE GetCurrentModule();

class Logger {
public:
    class OutputStream {
        friend class Logger;

    protected:
        LLAPI explicit OutputStream();

    public:
        Logger* logger{};
        int level{};
        std::string consoleFormat;
        std::string fileFormat;
        std::string playerFormat;
        fmt::text_style style;
        std::string levelPrefix;
        std::ostringstream os;
        bool locked = false; // Deprecated

        LLAPI explicit OutputStream(Logger* logger, int level, std::string&& consoleFormat, std::string&& fileFormat, std::string&& playerFormat, fmt::text_style&& style, std::string&& mode);

        template <typename T>
        OutputStream& operator<<(T t) {
            logger->lock();
            os << t;
            logger->unlock();
            return *this;
        }

        template <>
        OutputStream& operator<<(std::wstring wstr) {
            logger->lock();
            os << wstr2str(wstr);
            logger->unlock();
            return *this;
        }
        template <>
        OutputStream& operator<<(const wchar_t* wstr) {
            logger->lock();
            os << wstr2str(wstr);
            logger->unlock();
            return *this;
        }

        template <>
        OutputStream& operator<<(void (*t)(OutputStream&)) {
            t(*this);
            return *this;
        }

        template <typename S, typename... Args, enable_if_type<(fmt::v9::detail::is_string<S>::value), int> = 0>
        void operator()(const S& formatStr, const Args&... args) {
            if constexpr (0 == sizeof...(args)) {
                // Avoid fmt if only one argument
                *this << formatStr << endl;
            } else {
                std::string str = fmt::format(fmt::runtime(formatStr), args...);
                *this << str << endl;
            }
        }

        template <typename... Args>
        void operator()(const char* formatStr, const Args&... args) {
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
    LLAPI static bool setDefaultFileImpl(HMODULE hPlugin, const std::string& logFile, bool appendMode);
    LLAPI static bool setDefaultFileImpl(HMODULE hPlugin, nullptr_t);

    LLAPI static void endlImpl(HMODULE hPlugin, OutputStream& o);

public:
    std::string title;
    std::ofstream ofs;
    Player* player = nullptr;
    int consoleLevel = -1;
    int fileLevel = -1;
    int playerLevel = -1;

    ~Logger() {
        setFile(nullptr);
    }

    inline static bool setDefaultFile(const std::string& logFile, bool appendMode) {
        return setDefaultFileImpl(GetCurrentModule(), logFile, appendMode);
    };

    inline static bool setDefaultFile(nullptr_t a0) {
        return setDefaultFileImpl(GetCurrentModule(), a0);
    };

    inline static void endl(OutputStream& o) {
        return endlImpl(GetCurrentModule(), o);
    };

    LLAPI bool setFile(const std::string& logFile, bool appendMode = true);
    LLAPI bool setFile(nullptr_t);

    LLAPI bool tryLock();
    LLAPI bool lock();
    LLAPI bool unlock();

    OutputStream debug;
    OutputStream info;
    OutputStream warn;
    OutputStream error;
    OutputStream fatal;

    inline Logger()
    : Logger("") {
    }
    LLAPI explicit Logger(const std::string& title);

private:
    LLAPI CsLock& getLocker();


    // For compatibility
private:
    LLAPI static void initLockImpl(HMODULE hPlugin);
    LLAPI static void lockImpl(HMODULE hPlugin);
    LLAPI static void unlockImpl(HMODULE hPlugin);
};
