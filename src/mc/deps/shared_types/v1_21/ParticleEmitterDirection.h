#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct ParticleEmitterDirection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnkb80271;
    ::ll::UntypedStorage<8, 152> mUnk5abe6f;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEmitterDirection& operator=(ParticleEmitterDirection const&);
    ParticleEmitterDirection(ParticleEmitterDirection const&);
    ParticleEmitterDirection();
};

} // namespace SharedTypes::v1_21
