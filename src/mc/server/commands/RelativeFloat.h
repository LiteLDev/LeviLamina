#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    // prevent constructor by default
    RelativeFloat& operator=(RelativeFloat const&);
    RelativeFloat(RelativeFloat const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RelativeFloat@@QEAA@XZ
    MCAPI RelativeFloat();

    // symbol: ??0RelativeFloat@@QEAA@M_N@Z
    MCAPI RelativeFloat(float, bool);

    // symbol: ?getValue@RelativeFloat@@QEBAMM@Z
    MCAPI float getValue(float) const;

    // symbol: ?isRelative@RelativeFloat@@QEBA_NXZ
    MCAPI bool isRelative() const;

    // NOLINTEND
};
