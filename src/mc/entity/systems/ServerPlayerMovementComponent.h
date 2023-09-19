#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerMovementComponent {
public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ServerPlayerMovementComponent@@QEAA@$$QEAU0@@Z
    MCAPI ServerPlayerMovementComponent(struct ServerPlayerMovementComponent&&);

    // NOLINTEND
};
