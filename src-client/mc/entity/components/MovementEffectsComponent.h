#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MovementEffect;
// clang-format on

struct MovementEffectsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MovementEffect>> mMovementEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsComponent& operator=(MovementEffectsComponent const&);
    MovementEffectsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovementEffectsComponent(::MovementEffectsComponent const&);

    MCAPI void setEffect(::MovementEffect movementEffect);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MovementEffectsComponent const&);
    // NOLINTEND
};
