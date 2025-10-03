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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _doOfferFlowerTickSystem(::StrictEntityContext const&, ::OfferFlowerTickComponent& offerFlowerTickComponent);

    MCNAPI static void _tickOfferFlowerTickSystem(
        ::ViewT<::StrictEntityContext, ::Include<::ActorTickNeededComponent>, ::OfferFlowerTickComponent> view
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
