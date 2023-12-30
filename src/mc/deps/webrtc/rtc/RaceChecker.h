#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class RaceChecker {
public:
    // prevent constructor by default
    RaceChecker& operator=(RaceChecker const&);
    RaceChecker(RaceChecker const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RaceChecker@rtc@@QEAA@XZ
    MCAPI RaceChecker();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Acquire@RaceChecker@rtc@@AEBA_NXZ
    MCAPI bool Acquire() const;

    // symbol: ?Release@RaceChecker@rtc@@AEBAXXZ
    MCAPI void Release() const;

    // NOLINTEND
};

}; // namespace rtc
