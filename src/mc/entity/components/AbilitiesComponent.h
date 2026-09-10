#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/LayeredAbilities.h"

struct AbilitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities> mAbilities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~AbilitiesComponent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
