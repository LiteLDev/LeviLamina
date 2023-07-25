#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BarterComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERCOMPONENT
public:
    BarterComponent& operator=(BarterComponent const&) = delete;
    BarterComponent(BarterComponent const&)            = delete;
    BarterComponent()                                  = delete;
#endif

public:
    /**
     * @symbol ?onBarterItemPickedUp\@BarterComponent\@\@QEAAXAEBVActor\@\@UActorUniqueID\@\@F\@Z
     */
    MCAPI void onBarterItemPickedUp(class Actor const&, struct ActorUniqueID, short);
    /**
     * @symbol ?stopBarter\@BarterComponent\@\@QEAAXXZ
     */
    MCAPI void stopBarter();
};
