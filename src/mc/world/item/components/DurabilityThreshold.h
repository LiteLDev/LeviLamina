#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/sound/SoundEventIdentifier.h"

struct DurabilityThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                     mDurability;
    ::ll::TypedStorage<4, 4, ::ParticleType>          mParticleType;
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier> mSoundEvent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DurabilityThreshold();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
