#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class FramewiseActionOrStopSystem {

public:
    // prevent constructor by default
    FramewiseActionOrStopSystem& operator=(FramewiseActionOrStopSystem const&) = delete;
    FramewiseActionOrStopSystem(FramewiseActionOrStopSystem const&)            = delete;
    FramewiseActionOrStopSystem()                                              = delete;

public:
    /**
     * @symbol ?createFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFramewiseActionOrStopSystem(); // NOLINT
    /**
     * @symbol
     * ?tickFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@$$CBULocalMoveVelocityComponent\@\@UActionOrStopComponent\@\@\@\@\@Z
     */
    MCAPI static void tickFramewiseActionOrStopSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      class EntityRegistryBase,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          class FlagComponent<struct LocalPlayerComponentFlag>,
                                                          struct PlayerInputRequestComponent>,
                                                      struct LocalMoveVelocityComponent const,
                                                      struct ActionOrStopComponent>); // NOLINT

    // private:
    /**
     * @symbol
     * ?doFramewiseActionOrStopSystem\@FramewiseActionOrStopSystem\@\@CAXAEBULocalMoveVelocityComponent\@\@AEAUActionOrStopComponent\@\@\@Z
     */
    MCAPI static void
    doFramewiseActionOrStopSystem(struct LocalMoveVelocityComponent const&, struct ActionOrStopComponent&); // NOLINT

private:
};
