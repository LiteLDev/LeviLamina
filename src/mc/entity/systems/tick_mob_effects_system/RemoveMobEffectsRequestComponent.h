#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickMobEffectsSystem {

struct RemoveMobEffectsRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mEffectIds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RemoveMobEffectsRequestComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace TickMobEffectsSystem
