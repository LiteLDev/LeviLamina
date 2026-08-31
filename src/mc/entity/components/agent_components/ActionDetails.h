#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct ActionDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka60ca8;
    ::ll::UntypedStorage<4, 4>  mUnka6f6b0;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);
    ActionDetails(ActionDetails const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);
    ActionDetails(ActionDetails const&);
    ActionDetails();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ActionDetails();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace AgentComponents
