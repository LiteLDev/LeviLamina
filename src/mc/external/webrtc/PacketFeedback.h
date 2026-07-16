#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketFeedback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka3f21d;
    ::ll::UntypedStorage<8, 72> mUnkfd1be8;
    ::ll::UntypedStorage<4, 36> mUnk638b1f;
    ::ll::UntypedStorage<4, 4>  mUnk7bc493;
    ::ll::UntypedStorage<2, 2>  mUnk1b0954;
    ::ll::UntypedStorage<1, 1>  mUnkbf9ff9;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketFeedback& operator=(PacketFeedback const&);
    PacketFeedback(PacketFeedback const&);
    PacketFeedback();
};

} // namespace webrtc
