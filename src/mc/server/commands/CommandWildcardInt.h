#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {
public:
    bool mIsWildcard; // this+0x0
    int  mValue;      // this+0x4

public:
    // NOLINTBEGIN
    // symbol: ??0CommandWildcardInt@@QEAA@XZ
    MCAPI CommandWildcardInt();

    // symbol: ?getValue@CommandWildcardInt@@QEBAHXZ
    MCAPI int getValue() const;

    // symbol: ?isWildcard@CommandWildcardInt@@QEBA_NXZ
    MCAPI bool isWildcard() const;

    // NOLINTEND
};
