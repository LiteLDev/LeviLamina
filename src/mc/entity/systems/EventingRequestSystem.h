#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class LevelComponent;
class StrictEntityContext;
struct EventingRequestQueueComponent;
struct TickingSystemWithInfo;
// clang-format on

class EventingRequestSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _eventingRequestSystem(
        ::StrictEntityContext const&,
        ::EventingRequestQueueComponent& eventingRequestQueueComponent,
        ::LevelComponent&                levelComponent
    );

    MCAPI static void
    _tickEventingRequestSystem(::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent, ::LevelComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
