#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/ServerInstanceLeaveGameDoneEvent.h"
#include "mc/world/events/ServerInstanceRequestResourceReload.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerInstanceNotificationEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
