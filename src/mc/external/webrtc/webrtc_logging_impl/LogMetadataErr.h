#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::webrtc_logging_impl {

struct LogMetadataErr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8bcdc4;
    ::ll::UntypedStorage<4, 4>  mUnka55173;
    ::ll::UntypedStorage<4, 4>  mUnk25a112;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMetadataErr& operator=(LogMetadataErr const&);
    LogMetadataErr(LogMetadataErr const&);
    LogMetadataErr();
};

} // namespace webrtc::webrtc_logging_impl
