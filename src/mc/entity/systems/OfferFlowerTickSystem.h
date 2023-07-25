#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"

class OfferFlowerTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OFFERFLOWERTICKSYSTEM
public:
    OfferFlowerTickSystem& operator=(OfferFlowerTickSystem const&) = delete;
    OfferFlowerTickSystem(OfferFlowerTickSystem const&)            = delete;
    OfferFlowerTickSystem()                                        = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@OfferFlowerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUOfferFlowerTickComponent\@\@\@Z
     */
    MCAPI static void _doOfferFlowerTickSystem(class StrictEntityContext const&, struct OfferFlowerTickComponent&);
    /**
     * @symbol
     * ?_tickOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@VActorTickNeededComponent\@\@\@\@UOfferFlowerTickComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickOfferFlowerTickSystem(class ViewT<
                                                 class StrictEntityContext,
                                                 class EntityRegistryBase,
                                                 struct Include<class ActorTickNeededComponent>,
                                                 struct OfferFlowerTickComponent>);

private:
};
