#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TimerFacade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkc05226;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerFacade& operator=(TimerFacade const&);
    TimerFacade(TimerFacade const&);
    TimerFacade();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit TimerFacade(double timeDelay);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(double timeDelay);
#endif
    // NOLINTEND
};
