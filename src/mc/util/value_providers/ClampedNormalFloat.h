#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct ClampedNormalFloat {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2faf21;
    ::ll::UntypedStorage<4, 4> mUnk1f8356;
    ::ll::UntypedStorage<4, 4> mUnk25b93c;
    ::ll::UntypedStorage<4, 4> mUnkd8f4e6;
    // NOLINTEND

public:
    // prevent constructor by default
    ClampedNormalFloat& operator=(ClampedNormalFloat const&);
    ClampedNormalFloat(ClampedNormalFloat const&);
    ClampedNormalFloat();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float generateNext(::Random& random) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static float generateNext(::Random& random, float mean, float deviation, float min, float max);
    // NOLINTEND
};

} // namespace ValueProviders
