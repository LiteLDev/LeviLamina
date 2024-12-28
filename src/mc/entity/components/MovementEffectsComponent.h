#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3260e3;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsComponent& operator=(MovementEffectsComponent const&);
    MovementEffectsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementEffectsComponent(::MovementEffectsComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MovementEffectsComponent const&);
    // NOLINTEND
};
