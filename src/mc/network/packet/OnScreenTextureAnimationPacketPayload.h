#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnScreenTextureAnimationPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd81f0e;
    // NOLINTEND

public:
    // prevent constructor by default
    OnScreenTextureAnimationPacketPayload& operator=(OnScreenTextureAnimationPacketPayload const&);
    OnScreenTextureAnimationPacketPayload(OnScreenTextureAnimationPacketPayload const&);
    OnScreenTextureAnimationPacketPayload();
};
