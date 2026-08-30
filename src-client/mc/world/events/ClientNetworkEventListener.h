#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ClientMessageEvent;
// clang-format on

class ClientNetworkEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientNetworkEventListener();

    virtual ::EventResult onMessage(::ClientMessageEvent const& messageEvent);
    // NOLINTEND
};
