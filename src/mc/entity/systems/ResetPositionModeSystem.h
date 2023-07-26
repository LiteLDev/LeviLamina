#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetPositionModeSystem {

public:
    // prevent constructor by default
    ResetPositionModeSystem& operator=(ResetPositionModeSystem const&) = delete;
    ResetPositionModeSystem(ResetPositionModeSystem const&)            = delete;
    ResetPositionModeSystem()                                          = delete;

public:
    /**
     * @symbol ?createResetPositionModeSystem\@ResetPositionModeSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetPositionModeSystem(); // NOLINT
    /**
     * @symbol
     * ?tickResetPositionModeSystem\@ResetPositionModeSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@UPlayerPositionModeComponent\@\@\@\@\@Z
     */
    MCAPI static void
        tickResetPositionModeSystem(class ViewT<
                                    class StrictEntityContext,
                                    class EntityRegistryBase,
                                    struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
                                    struct PlayerPositionModeComponent>); // NOLINT
};
