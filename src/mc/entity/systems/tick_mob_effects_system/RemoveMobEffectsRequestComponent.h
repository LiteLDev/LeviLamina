#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TickMobEffectsSystem {

struct RemoveMobEffectsRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8b658f;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveMobEffectsRequestComponent& operator=(RemoveMobEffectsRequestComponent const&);
    RemoveMobEffectsRequestComponent(RemoveMobEffectsRequestComponent const&);
    RemoveMobEffectsRequestComponent();

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
