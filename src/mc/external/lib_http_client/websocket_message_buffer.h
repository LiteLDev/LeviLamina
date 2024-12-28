#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct websocket_message_buffer {
public:
    // prevent constructor by default
    websocket_message_buffer& operator=(websocket_message_buffer const&);
    websocket_message_buffer(websocket_message_buffer const&);
    websocket_message_buffer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~websocket_message_buffer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
