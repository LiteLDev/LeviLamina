/**
 * @file  FallingBlockNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FallingBlockNormalTickSystem.
 *
 */
class FallingBlockNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCKNORMALTICKSYSTEM
public:
    class FallingBlockNormalTickSystem& operator=(class FallingBlockNormalTickSystem const &) = delete;
    FallingBlockNormalTickSystem(class FallingBlockNormalTickSystem const &) = delete;
    FallingBlockNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@FallingBlockNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doFallingBlockNormalTickSystem\@FallingBlockNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVITickDelegate\@\@\@Z
     */
    MCAPI static void _doFallingBlockNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &, class ITickDelegate &);
    /**
     * @symbol  ?_tickFallingBlockNormalTickSystem\@FallingBlockNormalTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickFallingBlockNormalTickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct FallingBlockFlag>>, class ActorOwnerComponent>);

private:

};