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
#include <string>
#include <sstream>
#include <iostream>

/////////////////////////////////////////////////
// Usage:
// 
//   using namespace Logger;
// 
//   Info("There are {} days before {} to come back", 3, "alex");   //FMT-style IO
//                                                                  //with Auto Line-Wrap
//
//   Info().printf("%s, %d\n","Alex", 3);   //C-style IO
//   Info() << "test" << endl;              //STL-style IO
// 
// [Debug, Log, Info, Warn, Error, Fatal]
// 
/////////////////////////////////////////////////


namespace Logger
{
    extern CsLock lock;
    extern std::ofstream* logFile;
    extern std::string logHead;

    ////////////////////////////////// Impl //////////////////////////////////

    template <const char* MESSAGE>
    class LoggerImpl
    {
    protected:
        template <bool B, class T = void>
        using enable_if_t = typename std::enable_if<B, T>::type;

        virtual void RealPrint(const std::string& str)
        {
            lock.lock();
            fmt::print(str);
            if (logFile)
                fmt::print(GetFILEfromFstream(*(std::fstream*)logFile), str);
            lock.unlock();
        }

    public:
        explicit LoggerImpl()
        {
            std::string str = fmt::format("[{:%Y-%m-%d %H:%M:%S} {}]{}", fmt::localtime(_time64(0)), MESSAGE,
                logHead.empty() ? " " : "[" + logHead + "] ");
            RealPrint(str);
        }

        LoggerImpl(const LoggerImpl&) = delete;

        // Log(string("There are {} days before {} to come back"), 3, "alex");
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        LoggerImpl(const S& formatStr, const Args&... args)
            : LoggerImpl()
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log("There are {} days before {} to come back", 3, "alex");
        template <typename... Args>
        LoggerImpl(const char* formatStr, const Args&... args)
            : LoggerImpl()
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log().printf("%s, %d\n","Alex", 3);
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        LoggerImpl& printf(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::sprintf(formatStr, args...);
            RealPrint(str);
            return *this;
        }

        // Log() << "test" << endl;
        template <typename T>
        LoggerImpl& operator<<(T value)
        {
            std::ostringstream sout;
            sout << value;
            RealPrint(sout.str());
            return *this;
        }

        LoggerImpl& operator<<(void (*obj)(LoggerImpl&))
        {
            obj(*this);
            return *this;
        }

        // flush
        LoggerImpl& flush()
        {
            lock.lock();
            fflush(stdout);
            std::cout.flush();
            lock.unlock();
            return *this;
        }
    };

    //endl
    template <const char* TYPE>
    inline void endl(LoggerImpl<TYPE>& logger)
    {
        lock.lock();
        logger << '\n';
        lock.unlock();
        logger.flush();
    }

    ////////////////////////////////// Specific //////////////////////////////////

    //Debug
    const char DebugMsg[] = "Debug";
    class Debug : public LoggerImpl<DebugMsg>
    {
    public:
        using LoggerImpl::LoggerImpl;
    };

    //Info
    const char InfoMsg[] = "Info";
    class Info : public LoggerImpl<InfoMsg>
    {
    public:
        using LoggerImpl::LoggerImpl;
    };

    //Warn
    const char WarnMsg[] = "Warning";
    class Warn : public LoggerImpl<WarnMsg>
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::yellow) | fmt::emphasis::bold, str);
            if (logFile)
                fmt::print(GetFILEfromFstream(*(std::fstream*)logFile), str);
            lock.unlock();
        }

    public:
        using LoggerImpl::LoggerImpl;
    };

    //Error
    const char ErrorMsg[] = "Error";
    class Error : public LoggerImpl<ErrorMsg>
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (logFile)
                fmt::print(GetFILEfromFstream(*(std::fstream*)logFile), str);
            lock.unlock();
        }

    public:
        using LoggerImpl::LoggerImpl;
    };

    //Fatal
    const char FatalMsg[] = "FATAL";
    class Fatal : public LoggerImpl<FatalMsg>
    {
    protected:
        virtual void RealPrint(const std::string& str) override
        {
            lock.lock();
            fmt::print(fmt::fg(fmt::color::red) | fmt::emphasis::bold, str);
            if (logFile)
                fmt::print(GetFILEfromFstream(*(std::fstream*)logFile), str);
            lock.unlock();
        }

    public:
        using LoggerImpl::LoggerImpl;
    };

    //Log
    const char LogType[] = "Log";
    class Log : public LoggerImpl<LogType>
    {
    public:

        // No Header
        // Override
        Log() {}

        // Log(string("There are {} days before {} to come back"), 3, "alex");
        // Override
        template <typename S, typename... Args, enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
        Log(const S& formatStr, const Args&... args)
        {
            std::string str = fmt::format(formatStr, args...);
            str.append(1, '\n');
            RealPrint(str);
        }

        // Log("There are {} days before {} to come back", 3, "alex");
        // Override
        template <typename... Args>
        Log(const char* formatStr, const Args&... args)
        {
            std::string str = fmt::format(std::string(formatStr), args...);
            str.append(1, '\n');
            RealPrint(str);
        }
    };
} // namespace Logger
