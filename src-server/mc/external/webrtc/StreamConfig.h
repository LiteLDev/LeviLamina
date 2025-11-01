#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class StreamConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7aed52;
    ::ll::UntypedStorage<8, 8> mUnkcbb1e7;
    ::ll::UntypedStorage<8, 8> mUnk9196f3;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamConfig& operator=(StreamConfig const&);
    StreamConfig(StreamConfig const&);
    StreamConfig();

};

}
