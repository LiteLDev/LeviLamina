#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerCurrentMovementComponent {
public:
    // prevent constructor by default
    ServerPlayerCurrentMovementComponent& operator=(ServerPlayerCurrentMovementComponent const&);
    ServerPlayerCurrentMovementComponent(ServerPlayerCurrentMovementComponent const&);
    ServerPlayerCurrentMovementComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ServerPlayerCurrentMovementComponent@@QEAA@$$QEAU0@@Z
    MCAPI ServerPlayerCurrentMovementComponent(struct ServerPlayerCurrentMovementComponent&&);

    // symbol: ??4ServerPlayerCurrentMovementComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ServerPlayerCurrentMovementComponent& operator=(struct ServerPlayerCurrentMovementComponent&&);

    // symbol: ??1ServerPlayerCurrentMovementComponent@@QEAA@XZ
    MCAPI ~ServerPlayerCurrentMovementComponent();

    // NOLINTEND
};
