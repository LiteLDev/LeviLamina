#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class websocket_message_buffer {
public:
    // prevent constructor by default
    websocket_message_buffer& operator=(websocket_message_buffer const&);
    websocket_message_buffer(websocket_message_buffer const&);
    websocket_message_buffer();

public:
    // NOLINTBEGIN
    MCAPI ~websocket_message_buffer();

    // NOLINTEND
};

}; // namespace xbox::httpclient
