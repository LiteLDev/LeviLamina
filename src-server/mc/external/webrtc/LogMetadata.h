#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LoggingSeverity.h"

namespace rtc::webrtc_logging_impl {

class LogMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk53b5e5;
    ::ll::UntypedStorage<4, 4> mUnkea7bdc;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMetadata& operator=(LogMetadata const&);
    LogMetadata(LogMetadata const&);
    LogMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LogMetadata(char const* file, int line, ::rtc::LoggingSeverity severity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* file, int line, ::rtc::LoggingSeverity severity);
    // NOLINTEND
};

} // namespace rtc::webrtc_logging_impl
