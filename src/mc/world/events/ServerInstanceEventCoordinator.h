#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ServerInstanceEventHandler;
class ServerInstanceEventListener;
// clang-format on

class ServerInstanceEventCoordinator : public ::EventCoordinator<::ServerInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerInstanceEventHandler>> mServerInstanceEventHandler;
    // NOLINTEND
};
