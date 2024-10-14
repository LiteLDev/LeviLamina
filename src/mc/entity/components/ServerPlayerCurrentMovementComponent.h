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
    MCAPI ServerPlayerCurrentMovementComponent(struct ServerPlayerCurrentMovementComponent&&);

    MCAPI struct ServerPlayerCurrentMovementComponent& operator=(struct ServerPlayerCurrentMovementComponent&&);

    MCAPI ~ServerPlayerCurrentMovementComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
