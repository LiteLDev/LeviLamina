#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct TickingSystemWithInfo;
struct WalkDistComponent;
// clang-format on

class SetPreviousWalkDistSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _tickWalkDistPrevSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent>, ::WalkDistComponent> view);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND

};
