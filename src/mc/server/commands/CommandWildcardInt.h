#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {
public:
    bool mIsWildcard; // this+0x0
    int  mValue;      // this+0x4

public:
    // NOLINTBEGIN
    MCAPI CommandWildcardInt();

    MCAPI int getValue() const;

    MCAPI bool isWildcard() const;

    // NOLINTEND
};
