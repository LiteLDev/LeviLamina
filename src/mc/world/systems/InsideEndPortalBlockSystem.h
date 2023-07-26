#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InsideEndPortalBlockSystem {

public:
    // prevent constructor by default
    InsideEndPortalBlockSystem& operator=(InsideEndPortalBlockSystem const&) = delete;
    InsideEndPortalBlockSystem(InsideEndPortalBlockSystem const&)            = delete;
    InsideEndPortalBlockSystem()                                             = delete;

public:
    /**
     * @symbol ?createSystem\@InsideEndPortalBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
