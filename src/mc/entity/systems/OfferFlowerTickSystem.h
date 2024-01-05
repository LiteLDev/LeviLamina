#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"

class OfferFlowerTickSystem {
public:
    // prevent constructor by default
    OfferFlowerTickSystem& operator=(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@OfferFlowerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doOfferFlowerTickSystem@OfferFlowerTickSystem@@CAXAEBVStrictEntityContext@@AEAUOfferFlowerTickComponent@@@Z
    MCAPI static void _doOfferFlowerTickSystem(class StrictEntityContext const&, struct OfferFlowerTickComponent&);

    // symbol:
    // ?_tickOfferFlowerTickSystem@OfferFlowerTickSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@VActorTickNeededComponent@@@@UOfferFlowerTickComponent@@@@@Z
    MCAPI static void _tickOfferFlowerTickSystem(class ViewT<
                                                 class StrictEntityContext,
                                                 struct Include<class ActorTickNeededComponent>,
                                                 struct OfferFlowerTickComponent> view);

    // NOLINTEND
};
