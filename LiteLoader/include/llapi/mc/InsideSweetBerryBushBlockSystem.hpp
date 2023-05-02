/**
 * @file  InsideSweetBerryBushBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideSweetBerryBushBlockSystem.
 *
 */
class InsideSweetBerryBushBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDESWEETBERRYBUSHBLOCKSYSTEM
public:
    class InsideSweetBerryBushBlockSystem& operator=(class InsideSweetBerryBushBlockSystem const &) = delete;
    InsideSweetBerryBushBlockSystem(class InsideSweetBerryBushBlockSystem const &) = delete;
    InsideSweetBerryBushBlockSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@InsideSweetBerryBushBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tick\@InsideSweetBerryBushBlockSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBU?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag> const, class ActorOwnerComponent>);

};
