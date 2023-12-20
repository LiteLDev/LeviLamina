#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/LoggingSeverity.h"

namespace rtc::webrtc_logging_impl {

class LogMetadata {
public:
    // prevent constructor by default
    LogMetadata& operator=(LogMetadata const&);
    LogMetadata(LogMetadata const&);
    LogMetadata();

public:
    // NOLINTBEGIN
    // symbol: ??0LogMetadata@webrtc_logging_impl@rtc@@QEAA@PEBDHW4LoggingSeverity@2@@Z
    MCAPI LogMetadata(char const*, int, ::rtc::LoggingSeverity);

    // NOLINTEND
};

}; // namespace rtc::webrtc_logging_impl
