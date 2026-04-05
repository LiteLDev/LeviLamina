#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

struct BreakingItemParticleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType> mType;
    ::ll::TypedStorage<4, 4, uint>           mNumParticles;
    ::ll::TypedStorage<4, 4, float>          mSize;
    ::ll::TypedStorage<4, 4, float>          mSpeedModifier;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    BreakingItemParticleData();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit BreakingItemParticleData(::ParticleType type);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ParticleType type);
#endif
    // NOLINTEND
};
