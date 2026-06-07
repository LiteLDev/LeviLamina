#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class ChanceInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb70161;
    // NOLINTEND

public:
    // prevent constructor by default
    ChanceInformation& operator=(ChanceInformation const&);
    ChanceInformation(ChanceInformation const&);
    ChanceInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValid() const;

    MCNAPI bool roll(::Random& random) const;

    MCNAPI void set(float value);

    MCNAPI void set(uint numerator, uint denominator);
    // NOLINTEND
};
