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
    // symbol: ?isValid@ChanceInformation@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?roll@ChanceInformation@@QEBA_NAEAVRandom@@@Z
    MCAPI bool roll(class Random& random) const;

    // symbol: ?set@ChanceInformation@@QEAAXM@Z
    MCAPI void set(float value);

    // symbol: ?set@ChanceInformation@@QEAAXII@Z
    MCAPI void set(uint, uint);

    // NOLINTEND
};
