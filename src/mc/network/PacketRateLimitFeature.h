#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketRateLimitFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd5bd6e;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRateLimitFeature& operator=(PacketRateLimitFeature const&);
    PacketRateLimitFeature(PacketRateLimitFeature const&);
    PacketRateLimitFeature();
};
