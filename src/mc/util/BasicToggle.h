#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BasicToggle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7d5764;
    ::ll::UntypedStorage<1, 1> mUnkaa1468;
    ::ll::UntypedStorage<1, 1> mUnkad18a3;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicToggle& operator=(BasicToggle const&);
    BasicToggle(BasicToggle const&);
    BasicToggle();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit BasicToggle(bool startAsOn);

    MCNAPI bool getStateChange();

    MCNAPI bool peek() const;

    MCNAPI void setIsOn(bool isOn);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(bool startAsOn);
#endif
    // NOLINTEND
};
