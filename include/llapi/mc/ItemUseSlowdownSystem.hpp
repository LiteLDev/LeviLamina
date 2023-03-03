/**
 * @file  ItemUseSlowdownSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemUseSlowdownSystem.
 *
 */
class ItemUseSlowdownSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSESLOWDOWNSYSTEM
public:
    class ItemUseSlowdownSystem& operator=(class ItemUseSlowdownSystem const &) = delete;
    ItemUseSlowdownSystem(class ItemUseSlowdownSystem const &) = delete;
    ItemUseSlowdownSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createItemUseSlowdownRequestSystem\@ItemUseSlowdownSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createItemUseSlowdownRequestSystem();
    /**
     * @symbol  ?createItemUseSlowdownSystem\@ItemUseSlowdownSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createItemUseSlowdownSystem();
    /**
     * @symbol  ?createResetSprintTriggerTimeSystem\@ItemUseSlowdownSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetSprintTriggerTimeSystem();

//private:
    /**
     * @symbol  ?doItemUseSlowdownRequestSystem\@ItemUseSlowdownSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUSlowdownByItemInUseRequestComponent\@\@AEAUMoveInputComponent\@\@\@Z
     */
    MCAPI static void doItemUseSlowdownRequestSystem(class StrictEntityContext const &, struct SlowdownByItemInUseRequestComponent const &, struct MoveInputComponent &);
    /**
     * @symbol  ?doItemUseSlowdownSystem\@ItemUseSlowdownSystem\@\@CAXAEBVStrictEntityContext\@\@V?$Optional\@$$CBUItemInUseComponent\@\@\@\@AEAUMoveInputComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USlowdownByItemInUseRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void doItemUseSlowdownSystem(class StrictEntityContext const &, class Optional<struct ItemInUseComponent const>, struct MoveInputComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SlowdownByItemInUseRequestComponent>);
    /**
     * @symbol  ?doResetSprintTriggerTimeSystem\@ItemUseSlowdownSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUVanillaClientGameplayComponent\@\@\@Z
     */
    MCAPI static void doResetSprintTriggerTimeSystem(class StrictEntityContext const &, struct VanillaClientGameplayComponent &);

private:

};