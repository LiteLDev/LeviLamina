#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventHandler;
class ServerNetworkEventListener;
// clang-format on

class ServerNetworkEventCoordinator : public ::EventCoordinator<::ServerNetworkEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkEventHandler>> mServerNetworkEventHandler;
    // NOLINTEND
};
