#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::webrtc_logging_impl {

struct LogMetadataErr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4ca78d;
    ::ll::UntypedStorage<4, 4>  mUnk84d2e6;
    ::ll::UntypedStorage<4, 4>  mUnk1929f3;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMetadataErr& operator=(LogMetadataErr const&);
    LogMetadataErr(LogMetadataErr const&);
    LogMetadataErr();
};

} // namespace rtc::webrtc_logging_impl
