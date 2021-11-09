#pragma once

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif
#include <fmt/chrono.h>
#include <fmt/color.h>
#include <fmt/core.h>
#include <fmt/os.h>
#include <fmt/printf.h>
#include <Utils/CsLock.h>
#include <Utils/WinHelper.h>
#include <Utils/FileHelper.h>
#include <Utils/PluginOwnData.h>
#include <string>
#include <sstream>
#include <iostream>

///////////////////////////////////////////////////////
// Easy to log things into both console and log file
// 
// [Usage]
// 
//   Logger::setTitle("xxxx");                  // Set the title before this plugin's log
//   Logger::setFile("logs/xxxx/aaa.log");      // Set the log file (nullptr to clear) 
//   using namespace Logger;
// 
//   Info("There are {} days before {} to come back", 3, "alex");   // FMT-style IO
//                                                                  // with Auto Line-Wrap
//
//   Info().printf("%s, %d\n","Alex", 3);   // C-style IO
//   Info() << "test" << endl;              // STL-style IO
// 
// [Debug, Log, Info, Warn, Error, Fatal]
// 
/////////////////////////////////////////////////////

#define LOGGER_CURRENT_TITLE "ll_plugin_logger_title"
#define LOGGER_CURRENT_FILE "ll_plugin_logger_file"

namespace Logger
{
    extern CsLock lock;

    //title
    void inline setTitle(const std::string& title)
    {
        PluginOwnData::set<std::string>(LOGGER_CURRENT_TITLE, title);
    }

    //file
    bool inline setFile(const std::string& logFile)
    {
        if (logFile.empty())
        {
            PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
            return true;
        }
        else
        {
            auto& res = PluginOwnData::set<std::ofstream>(LOGGER_CURRENT_FILE, logFile, std::ios::app);
            return res.is_open();
        }
    }

    bool inline setFile(nullptr_t)
    {
        PluginOwnData::remove<std::ofstream>(LOGGER_CURRENT_FILE);
        return true;
    }

    ////////////////////////////////// Basic //////////////////////////////////

    //Log
    class Log
    {
    protected:
        template <bool B, class T = void>
        using enable_if_t = typename std::enable_if<B, T>::type;

        virtual void RealPrint(const std::string& str)
        {
            lock.lock();
            fmt::print(str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            lock.unlock();
        }

    public:
        explicit Log() = default;

        Log(const Log&) = delete;
        Log& operator=(const Log&) = delete;

        // Log(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log(const S& formatStr, const Args&... args)
            : Log()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        Log(const char* formatStr, const Args&... args)
            : Log()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Log() << "test" << endl;
        template <typename T>
        Log& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        Log& operator<<(void (*obj)(Log&))
        {
            obj(*this);
            return *this;
        }

        // flush
        Log& flush()
        {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    //endl
    inline void endl(Log& logger)
    {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    ////////////////////////////////// Specific Types //////////////////////////////////

    //Debug
    class Debug : public Log
    {
    public:
        explicit Debug()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} DEBUG]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }
        using Log::Log;
    };

    //Info
    class Info : public Log
    {
    public:
        explicit Info()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} INFO]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }
        using Log::Log;
    };

    //Warn
    class Warn : public Log
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            lock.unlock();
        }

    public:
        explicit Warn()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} WARNING]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }
        using Log::Log;
    };

    //Error
    class Error : public Log
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            lock.unlock();
        }

    public:
        explicit Error()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} ERROR]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }
        using Log::Log;
    };

    //Fatal
    class Fatal : public Log
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (PluginOwnData::has(LOGGER_CURRENT_FILE))
                fmt::print(GetFILEfromFstream(PluginOwnData::get<std::fstream>(LOGGER_CURRENT_FILE)), str);
            lock.unlock();
        }

    public:
        explicit Fatal()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} FATAL]{}", fmt::localtime(_time64(0)),
                PluginOwnData::has(LOGGER_CURRENT_TITLE) ?
                " " : "[" + PluginOwnData::get<std::string>(LOGGER_CURRENT_TITLE) + "] ");
            RealPrint(str);
        }
        using Log::Log;
    };
} // namespace Logger

#undef LOGGER_CURRENT_TITLE