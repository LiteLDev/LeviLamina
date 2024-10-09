#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

class OfferFlowerTickSystem {
public:
    // prevent constructor by default
    OfferFlowerTickSystem& operator=(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doOfferFlowerTickSystem(
        class StrictEntityContext const&,
        struct OfferFlowerTickComponent& offerFlowerTickComponent
    );

    MCAPI static void _tickOfferFlowerTickSystem(class ViewT<
                                                 class StrictEntityContext,
                                                 struct Include<class ActorTickNeededComponent>,
                                                 struct OfferFlowerTickComponent> view);

    // NOLINTEND
};
