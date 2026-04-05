#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct UnsupportedAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk70292a;
    // NOLINTEND

public:
    // prevent constructor by default
    UnsupportedAction& operator=(UnsupportedAction const&);
    UnsupportedAction(UnsupportedAction const&);
    UnsupportedAction();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~UnsupportedAction();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace TelemtetryEvents
