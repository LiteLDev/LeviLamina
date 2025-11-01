#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RoundTripTimeUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1f1d5f;
    ::ll::UntypedStorage<8, 8> mUnka16081;
    ::ll::UntypedStorage<1, 1> mUnk498115;
    // NOLINTEND

public:
    // prevent constructor by default
    RoundTripTimeUpdate& operator=(RoundTripTimeUpdate const&);
    RoundTripTimeUpdate(RoundTripTimeUpdate const&);
    RoundTripTimeUpdate();
};

} // namespace webrtc
