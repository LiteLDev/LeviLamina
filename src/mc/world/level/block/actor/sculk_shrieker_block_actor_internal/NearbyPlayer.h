#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkShriekerBlockActorInternal {

struct NearbyPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk158b51;
    ::ll::UntypedStorage<8, 8> mUnkd29128;
    ::ll::UntypedStorage<4, 4> mUnk4f9a09;
    // NOLINTEND

public:
    // prevent constructor by default
    NearbyPlayer& operator=(NearbyPlayer const&);
    NearbyPlayer(NearbyPlayer const&);
    NearbyPlayer();
};

} // namespace SculkShriekerBlockActorInternal
