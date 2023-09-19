#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputComponent {
public:
    // prevent constructor by default
    MoveInputComponent& operator=(MoveInputComponent const&);
    MoveInputComponent(MoveInputComponent const&);
    MoveInputComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4MoveInputComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct MoveInputComponent& operator=(struct MoveInputComponent&&);

    // NOLINTEND
};
