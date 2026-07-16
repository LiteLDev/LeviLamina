#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpParseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8a5d8f;
    ::ll::UntypedStorage<8, 32> mUnk92a9dc;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpParseError& operator=(SdpParseError const&);
    SdpParseError(SdpParseError const&);
    SdpParseError();
};

} // namespace webrtc
