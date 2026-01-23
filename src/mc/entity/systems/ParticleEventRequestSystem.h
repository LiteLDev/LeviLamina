#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct ParticleEventRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

struct ParticleEventRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void
    _tick(::StrictEntityContext const&, ::LevelComponent& level, ::ParticleEventRequestQueueComponent& requests);

    MCNAPI_C static void
    _view(::ViewT<::StrictEntityContext, ::LevelComponent, ::ParticleEventRequestQueueComponent> view);

    MCNAPI_C static ::TickingSystemWithInfo create();
    // NOLINTEND
};
