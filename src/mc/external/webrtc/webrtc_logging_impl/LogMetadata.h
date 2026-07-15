#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/LoggingSeverity.h"

namespace webrtc::webrtc_logging_impl {

class LogMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkddc33e;
    ::ll::UntypedStorage<4, 4> mUnk37abdd;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMetadata& operator=(LogMetadata const&);
    LogMetadata(LogMetadata const&);
    LogMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LogMetadata(char const* file, int line, ::webrtc::LoggingSeverity severity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* file, int line, ::webrtc::LoggingSeverity severity);
    // NOLINTEND
};

} // namespace webrtc::webrtc_logging_impl
