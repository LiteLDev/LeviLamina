#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb62bb4;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsComponent& operator=(MobEffectsComponent const&);
    MobEffectsComponent(MobEffectsComponent const&);
    MobEffectsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::MobEffectsComponent& operator=(::MobEffectsComponent&&);

    MCAPI ~MobEffectsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
