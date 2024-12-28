#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ParticleSystem {

class ParticleEffectComponentRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2def4d;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectComponentRegistry& operator=(ParticleEffectComponentRegistry const&);
    ParticleEffectComponentRegistry(ParticleEffectComponentRegistry const&);
    ParticleEffectComponentRegistry();
};

} // namespace ParticleSystem
