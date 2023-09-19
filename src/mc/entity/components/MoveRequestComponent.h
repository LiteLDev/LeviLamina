#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveRequestComponent {
public:
    // prevent constructor by default
    MoveRequestComponent& operator=(MoveRequestComponent const&);
    MoveRequestComponent(MoveRequestComponent const&);
    MoveRequestComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4MoveRequestComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct MoveRequestComponent& operator=(struct MoveRequestComponent&&);

    // NOLINTEND
};
