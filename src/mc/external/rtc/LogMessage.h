#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LogErrorContext.h"
#include "mc/external/rtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
namespace rtc { class StringBuilder; }
// clang-format on

namespace rtc {

class LogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnkf7d9ea;
    ::ll::UntypedStorage<8, 32> mUnk22d92a;
    ::ll::UntypedStorage<8, 32> mUnkb272f2;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessage& operator=(LogMessage const&);
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void FinishPrintStream();

    MCAPI LogMessage(char const*, int, ::rtc::LoggingSeverity, ::rtc::LogErrorContext, int);

    MCAPI ::rtc::StringBuilder& stream();

    MCAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void AddLogToStream(::rtc::LogSink*, ::rtc::LoggingSeverity);

    MCAPI static int GetMinLogSeverity();

    MCAPI static bool IsNoop(::rtc::LoggingSeverity);

    MCAPI static int64 LogStartTime();

    MCAPI static void OutputToDebug(::rtc::LogLineRef const&);

    MCAPI static void RemoveLogToStream(::rtc::LogSink*);

    MCAPI static void UpdateMinLogSeverity();

    MCAPI static uint WallClockStartTime();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& log_thread_();

    MCAPI static bool& log_timestamp_();

    MCAPI static bool& log_to_stderr_();

    MCAPI static ::rtc::LogSink*& streams_();

    MCAPI static ::std::atomic<bool>& streams_empty_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(char const*, int, ::rtc::LoggingSeverity, ::rtc::LogErrorContext, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
