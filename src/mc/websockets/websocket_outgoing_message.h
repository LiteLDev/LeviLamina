#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct websocket_outgoing_message {
public:
    // prevent constructor by default
    websocket_outgoing_message& operator=(websocket_outgoing_message const&);
    websocket_outgoing_message(websocket_outgoing_message const&);
    websocket_outgoing_message();

public:
    // NOLINTBEGIN
    MCAPI ~websocket_outgoing_message();

    // NOLINTEND
};
