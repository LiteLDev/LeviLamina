#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RelativeFloat {
public:
    float mOffset;
    bool  mRelative;

public:
    // NOLINTBEGIN
    // symbol: ??0RelativeFloat@@QEAA@XZ
    MCAPI RelativeFloat();

    // symbol: ??0RelativeFloat@@QEAA@M_N@Z
    MCAPI RelativeFloat(float value, bool relative = true);

    // symbol: ?getValue@RelativeFloat@@QEBAMM@Z
    MCAPI float getValue(float center = 0) const;

    // symbol: ?isRelative@RelativeFloat@@QEBA_NXZ
    MCAPI bool isRelative() const;

    // NOLINTEND
};
