#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct SwimAmountComponent;
// clang-format on

class CurrentSwimAmountSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doCurrentSwimAmountSystem(
        ::StrictEntityContext const&,
        ::SwimAmountComponent&          swimAmountComponent,
        ::ActorDataFlagComponent const& synchedActorDataComponent
    );

    MCAPI static void tick(::ViewT<
                           ::StrictEntityContext,
                           ::Include<::ActorMovementTickNeededComponent>,
                           ::SwimAmountComponent,
                           ::ActorDataFlagComponent const> view);
    // NOLINTEND
};
