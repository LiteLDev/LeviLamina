#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostNormalTickSystem {

public:
    // prevent constructor by default
    ActorPostNormalTickSystem& operator=(ActorPostNormalTickSystem const&) = delete;
    ActorPostNormalTickSystem(ActorPostNormalTickSystem const&)            = delete;
    ActorPostNormalTickSystem()                                            = delete;

public:
    /**
     * @symbol ?createSystemClient\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemClient(); // NOLINT
    /**
     * @symbol ?createSystemServer\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemServer(); // NOLINT
};
