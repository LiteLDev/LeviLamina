#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

struct InteractionParticle {
public:
    // InteractionParticle inner types define
    enum class CopperEventType : uchar {
        None   = 0,
        WaxOn  = 1,
        WaxOff = 2,
        Scrape = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>                         mOnStartType;
    ::ll::TypedStorage<4, 4, float>                                  mOffsetY;
    ::ll::TypedStorage<1, 1, bool>                                   mOffsetTowardsInteractor;
    ::ll::TypedStorage<1, 1, ::InteractionParticle::CopperEventType> mCopperEventType;
    // NOLINTEND
};
