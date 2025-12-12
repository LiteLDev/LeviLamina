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
    // EventingRequestSystem inner types define
    using SystemView = ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent, ::LevelComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _eventingRequestSystem(
        ::StrictEntityContext const&,
        ::EventingRequestQueueComponent& eventingRequestQueueComponent,
        ::LevelComponent&                levelComponent
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
