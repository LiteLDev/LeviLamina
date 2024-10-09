#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChanceInformation {
public:
    // prevent constructor by default
    ChanceInformation& operator=(ChanceInformation const&);
    ChanceInformation(ChanceInformation const&);
    ChanceInformation();

public:
    // NOLINTBEGIN
    MCAPI bool isValid() const;

    MCAPI bool roll(class Random& random) const;

    MCAPI void set(float value);

    MCAPI void set(uint numerator, uint denominator);

    // NOLINTEND
};
