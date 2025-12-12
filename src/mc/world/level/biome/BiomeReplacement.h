#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct BiomeReplacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Biome const*>>                 mReplacementBiome;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mDimension;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::Biome const*>>> mTargetBiomes;
    ::ll::TypedStorage<4, 4, float>                                           mAmount;
    ::ll::TypedStorage<4, 4, float>                                           mNoiseFrequencyScale;
    ::ll::TypedStorage<4, 4, uint>                                            mReplacementIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeReplacement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
