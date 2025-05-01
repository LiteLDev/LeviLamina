#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct PushActorsSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void pushActors(::ActorOwnerComponent& actorOwnerComponent);
    // NOLINTEND
};
