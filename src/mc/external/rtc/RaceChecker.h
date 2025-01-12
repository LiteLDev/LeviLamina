#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RaceChecker {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Acquire() const;

    MCAPI RaceChecker();

    MCAPI void Release() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace rtc
