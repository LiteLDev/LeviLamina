#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

namespace SharedTypes::Beta {

struct DurabilityThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                         mDurability;
    ::ll::TypedStorage<4, 4, ::ParticleType>                              mParticleType;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Versionless::SoundEventName> mSoundEvent;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
