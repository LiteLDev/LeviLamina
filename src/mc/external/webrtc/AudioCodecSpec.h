#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AudioCodecSpec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2c4e2f;
    ::ll::UntypedStorage<8, 32> mUnka2a596;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioCodecSpec& operator=(AudioCodecSpec const&);
    AudioCodecSpec(AudioCodecSpec const&);
    AudioCodecSpec();
};

} // namespace webrtc
