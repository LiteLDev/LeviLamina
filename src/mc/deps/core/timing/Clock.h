#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Clock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb389b9;
    ::ll::UntypedStorage<4, 4> mUnk27c54e;
    ::ll::UntypedStorage<4, 4> mUnk3c0e8f;
    ::ll::UntypedStorage<4, 4> mUnk2e9149;
    ::ll::UntypedStorage<4, 4> mUnk242c30;
    ::ll::UntypedStorage<1, 1> mUnk2d6aa8;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Clock& operator=(Clock const&);
    Clock(Clock const&);
    Clock();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Clock& operator=(Clock const&);
    Clock(Clock const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Clock();

    MCNAPI float accumulatedTime() const;

    MCNAPI float currentTime() const;

    MCNAPI float lastDeltaTime() const;

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void update(float deltaTime, float currentTime);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace mce
