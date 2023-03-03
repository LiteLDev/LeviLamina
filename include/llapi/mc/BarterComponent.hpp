/**
 * @file  BarterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?onBarterItemPickedUp\@BarterComponent\@\@QEAAXAEBVActor\@\@UActorUniqueID\@\@F\@Z
     */
    MCAPI void onBarterItemPickedUp(class Actor const &, struct ActorUniqueID, short);
    /**
     * @symbol  ?stopBarter\@BarterComponent\@\@QEAAXXZ
     */
    MCAPI void stopBarter();

};