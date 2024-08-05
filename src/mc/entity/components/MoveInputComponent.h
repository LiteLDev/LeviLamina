#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputComponent {
public:
    // prevent constructor by default
    MoveInputComponent& operator=(MoveInputComponent const&);
    MoveInputComponent(MoveInputComponent const&);

public:
    // NOLINTBEGIN
    MCAPI MoveInputComponent();

    MCAPI struct MoveInputComponent& operator=(struct MoveInputComponent&&);

    // NOLINTEND
};
