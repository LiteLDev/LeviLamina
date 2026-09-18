#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/v1_26_50/actor/InteractionData.h"

struct InteractionParticle {
public:
    // InteractionParticle inner types define
    using CopperEventType = ::SharedTypes::v1_26_50::InteractionData::ParticleData::CopperEventType;

    using ParticleData = ::SharedTypes::v1_26_50::InteractionData::ParticleData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType> mOnStartType;
    ::ll::TypedStorage<4, 4, float>          mOffsetY;
    ::ll::TypedStorage<1, 1, bool>           mOffsetTowardsInteractor;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_50::InteractionData::ParticleData::CopperEventType> mCopperEventType;
    // NOLINTEND
};
