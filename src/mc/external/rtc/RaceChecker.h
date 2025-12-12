#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RaceChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4e0ca8;
    ::ll::UntypedStorage<4, 4> mUnkac2298;
    // NOLINTEND

public:
    // prevent constructor by default
    RaceChecker& operator=(RaceChecker const&);
    RaceChecker(RaceChecker const&);

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
