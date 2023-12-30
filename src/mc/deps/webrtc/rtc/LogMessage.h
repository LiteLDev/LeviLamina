#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/LogErrorContext.h"
#include "mc/deps/webrtc/rtc/LoggingSeverity.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
namespace rtc { class StringBuilder; }
// clang-format on

namespace rtc {

class LogMessage {
public:
    // prevent constructor by default
    LogMessage& operator=(LogMessage const&);
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // NOLINTBEGIN
    // symbol: ??0LogMessage@rtc@@QEAA@PEBDHW4LoggingSeverity@1@W4LogErrorContext@1@H@Z
    MCAPI LogMessage(char const*, int, ::rtc::LoggingSeverity, ::rtc::LogErrorContext, int);

    // symbol: ?stream@LogMessage@rtc@@QEAAAEAVStringBuilder@2@XZ
    MCAPI class rtc::StringBuilder& stream();

    // symbol: ??1LogMessage@rtc@@QEAA@XZ
    MCAPI ~LogMessage();

    // symbol: ?GetMinLogSeverity@LogMessage@rtc@@SAHXZ
    MCAPI static int GetMinLogSeverity();

    // symbol: ?IsNoop@LogMessage@rtc@@SA_NW4LoggingSeverity@2@@Z
    MCAPI static bool IsNoop(::rtc::LoggingSeverity);

    // symbol: ?LogStartTime@LogMessage@rtc@@SA_JXZ
    MCAPI static int64 LogStartTime();

    // symbol: ?WallClockStartTime@LogMessage@rtc@@SAIXZ
    MCAPI static uint WallClockStartTime();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FinishPrintStream@LogMessage@rtc@@AEAAXXZ
    MCAPI void FinishPrintStream();

    // symbol: ?OutputToDebug@LogMessage@rtc@@CAXAEBVLogLineRef@2@@Z
    MCAPI static void OutputToDebug(class rtc::LogLineRef const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?log_thread_@LogMessage@rtc@@0_NA
    MCAPI static bool log_thread_;

    // symbol: ?log_timestamp_@LogMessage@rtc@@0_NA
    MCAPI static bool log_timestamp_;

    // symbol: ?log_to_stderr_@LogMessage@rtc@@0_NA
    MCAPI static bool log_to_stderr_;

    // symbol: ?streams_@LogMessage@rtc@@0PEAVLogSink@2@EA
    MCAPI static class rtc::LogSink* streams_;

    // symbol: ?streams_empty_@LogMessage@rtc@@0U?$atomic@_N@std@@A
    MCAPI static std::atomic<bool> streams_empty_;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $log_thread_() { return log_thread_; }

    static auto& $log_timestamp_() { return log_timestamp_; }

    static auto& $log_to_stderr_() { return log_to_stderr_; }

    static auto& $streams_() { return streams_; }

    static auto& $streams_empty_() { return streams_empty_; }

    // NOLINTEND
};

}; // namespace rtc
