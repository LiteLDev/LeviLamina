#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorTickNeededComponent;
class BlockSourceComponent;
class StrictEntityContext;
struct ActorComponent;
struct RemotePlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

struct FlagRemotePlayersForTickingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void _tick(
        ::StrictEntityContext const&                 entity,
        ::BlockSourceComponent const&                blockSourceComponent,
        ::EntityModifier<::ActorTickNeededComponent> modifier
    );

    MCNAPI_C static void _view(
        ::ViewT<::StrictEntityContext, ::Include<::ActorComponent, ::RemotePlayerComponent>, ::BlockSourceComponent>
                                                     view,
        ::EntityModifier<::ActorTickNeededComponent> modifier
    );

    MCNAPI_C static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
