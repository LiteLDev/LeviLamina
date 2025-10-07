#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeReplacementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                 mReplacementBiome;
    ::ll::TypedStorage<2, 2, ushort>                 mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                  mAmount;
    ::ll::TypedStorage<4, 4, float>                  mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                   mReplacementIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeReplacementData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
