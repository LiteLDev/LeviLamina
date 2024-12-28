#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventVariantImpl.h"

// auto generated forward declare list
// clang-format off
struct ServerInstanceLeaveGameDoneEvent;
struct ServerInstanceRequestResourceReload;
// clang-format on

struct ServerInstanceNotificationEvent
: public ::EventVariantImpl<::ServerInstanceLeaveGameDoneEvent const, ::ServerInstanceRequestResourceReload const> {
public:
    // prevent constructor by default
    ServerInstanceNotificationEvent& operator=(ServerInstanceNotificationEvent const&);
    ServerInstanceNotificationEvent(ServerInstanceNotificationEvent const&);
    ServerInstanceNotificationEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerInstanceNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
