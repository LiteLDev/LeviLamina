#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPlayerMovementComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERMOVEMENTCOMPONENT
public:
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&) = delete;
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&)            = delete;
    ServerPlayerMovementComponent()                                                = delete;
#endif

public:
    /**
     * @symbol ??0ServerPlayerMovementComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ServerPlayerMovementComponent(struct ServerPlayerMovementComponent&&);
};
