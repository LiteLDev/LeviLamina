#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MovementEffect;
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MovementEffectsComponent(::MovementEffectsComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MovementEffectsComponent const&);
    // NOLINTEND
};
