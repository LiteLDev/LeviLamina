#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class ResetFrictionModifierSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETFRICTIONMODIFIERSYSTEM
public:
    ResetFrictionModifierSystem& operator=(ResetFrictionModifierSystem const&) = delete;
    ResetFrictionModifierSystem(ResetFrictionModifierSystem const&)            = delete;
    ResetFrictionModifierSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ResetFrictionModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tickResetFrictionModifierSystem\@ResetFrictionModifierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPlayerInputRequestComponent\@\@\@\@UFrictionModifierComponent\@\@\@\@\@Z
     */
    MCAPI static void tickResetFrictionModifierSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      class EntityRegistryBase,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          struct PlayerInputRequestComponent>,
                                                      struct FrictionModifierComponent>);
};
