#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"

class OfferFlowerTickSystem {

public:
    // prevent constructor by default
    OfferFlowerTickSystem& operator=(OfferFlowerTickSystem const&) = delete;
    OfferFlowerTickSystem(OfferFlowerTickSystem const&)            = delete;
    OfferFlowerTickSystem()                                        = delete;

public:
    /**
     * @symbol ?createSystem\@OfferFlowerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_doOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAUOfferFlowerTickComponent\@\@\@Z
     */
    MCAPI static void
    _doOfferFlowerTickSystem(class StrictEntityContext const&, struct OfferFlowerTickComponent&); // NOLINT
    /**
     * @symbol
     * ?_tickOfferFlowerTickSystem\@OfferFlowerTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@VActorTickNeededComponent\@\@\@\@UOfferFlowerTickComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickOfferFlowerTickSystem(class ViewT<
                                                 class StrictEntityContext,
                                                 class EntityRegistryBase,
                                                 struct Include<class ActorTickNeededComponent>,
                                                 struct OfferFlowerTickComponent>); // NOLINT

private:
};
