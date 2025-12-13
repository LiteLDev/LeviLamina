#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

struct BreakingItemParticleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee4a98;
    ::ll::UntypedStorage<4, 4> mUnk51fed3;
    ::ll::UntypedStorage<4, 4> mUnke12ba6;
    ::ll::UntypedStorage<4, 4> mUnk2c063d;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakingItemParticleData& operator=(BreakingItemParticleData const&);
    BreakingItemParticleData(BreakingItemParticleData const&);
    BreakingItemParticleData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit BreakingItemParticleData(::ParticleType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ParticleType type);
    // NOLINTEND
};
