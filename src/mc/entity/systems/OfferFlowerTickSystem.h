#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class StrictEntityContext;
struct OfferFlowerTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class OfferFlowerTickSystem {
public:
    // prevent constructor by default
    OfferFlowerTickSystem& operator=(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem(OfferFlowerTickSystem const&);
    OfferFlowerTickSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doOfferFlowerTickSystem(::StrictEntityContext const&, ::OfferFlowerTickComponent& offerFlowerTickComponent);

    MCAPI static void _tickOfferFlowerTickSystem(
        ::ViewT<::StrictEntityContext, ::Include<::ActorTickNeededComponent>, ::OfferFlowerTickComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
