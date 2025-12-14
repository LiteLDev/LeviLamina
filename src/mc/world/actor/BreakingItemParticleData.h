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

public:
    // prevent constructor by default
    BreakingItemParticleData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit BreakingItemParticleData(::ParticleType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::ParticleType type);
    // NOLINTEND
};
