#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RaceChecker {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Acquire() const;

    MCNAPI RaceChecker();

    MCNAPI void Release() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace rtc
