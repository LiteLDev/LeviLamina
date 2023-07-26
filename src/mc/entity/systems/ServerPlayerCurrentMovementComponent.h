#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerCurrentMovementComponent {

public:
    // prevent constructor by default
    ServerPlayerCurrentMovementComponent& operator=(ServerPlayerCurrentMovementComponent const&) = delete;
    ServerPlayerCurrentMovementComponent(ServerPlayerCurrentMovementComponent const&)            = delete;
    ServerPlayerCurrentMovementComponent()                                                       = delete;

public:
    /**
     * @symbol ??0ServerPlayerCurrentMovementComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ServerPlayerCurrentMovementComponent(struct ServerPlayerCurrentMovementComponent&&); // NOLINT
    /**
     * @symbol ??4ServerPlayerCurrentMovementComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ServerPlayerCurrentMovementComponent&
    operator=(struct ServerPlayerCurrentMovementComponent&&); // NOLINT
    /**
     * @symbol ??1ServerPlayerCurrentMovementComponent\@\@QEAA\@XZ
     */
    MCAPI ~ServerPlayerCurrentMovementComponent(); // NOLINT
};
