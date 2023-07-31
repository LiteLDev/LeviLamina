#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerMovementComponent {

public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&) = delete;
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&)            = delete;
    ServerPlayerMovementComponent()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ServerPlayerMovementComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ServerPlayerMovementComponent(struct ServerPlayerMovementComponent&&);
    // NOLINTEND
};
