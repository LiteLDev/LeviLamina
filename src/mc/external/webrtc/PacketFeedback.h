#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketFeedback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka3f21d;
    ::ll::UntypedStorage<8, 72> mUnkfd1be8;
    ::ll::UntypedStorage<8, 8>  mUnkf995c1;
    ::ll::UntypedStorage<4, 36> mUnkc54a88;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketFeedback& operator=(PacketFeedback const&);
    PacketFeedback(PacketFeedback const&);
    PacketFeedback();
};

} // namespace webrtc
