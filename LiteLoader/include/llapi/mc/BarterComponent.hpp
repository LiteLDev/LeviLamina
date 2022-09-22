/**
 * @file  BarterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BarterComponent.
 *
 */
class BarterComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERCOMPONENT
public:
    class BarterComponent& operator=(class BarterComponent const &) = delete;
    BarterComponent(class BarterComponent const &) = delete;
    BarterComponent() = delete;
#endif

public:
    /**
     * @hash   1467082329
     * @symbol ?onBarterItemPickedUp@BarterComponent@@QEAAXAEBVActor@@UActorUniqueID@@F@Z
     */
    MCAPI void onBarterItemPickedUp(class Actor const &, struct ActorUniqueID, short);
    /**
     * @hash   -1413360125
     * @symbol ?stopBarter@BarterComponent@@QEAAXXZ
     */
    MCAPI void stopBarter();

};