#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerCurrentMovementComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERCURRENTMOVEMENTCOMPONENT
public:
    ServerPlayerCurrentMovementComponent& operator=(ServerPlayerCurrentMovementComponent const&) = delete;
    ServerPlayerCurrentMovementComponent(ServerPlayerCurrentMovementComponent const&)            = delete;
    ServerPlayerCurrentMovementComponent()                                                       = delete;
#endif

public:
    /**
     * @symbol ??0ServerPlayerCurrentMovementComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ServerPlayerCurrentMovementComponent(struct ServerPlayerCurrentMovementComponent&&);
    /**
     * @symbol ??4ServerPlayerCurrentMovementComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct ServerPlayerCurrentMovementComponent& operator=(struct ServerPlayerCurrentMovementComponent&&);
    /**
     * @symbol ??1ServerPlayerCurrentMovementComponent\@\@QEAA\@XZ
     */
    MCAPI ~ServerPlayerCurrentMovementComponent();
};
