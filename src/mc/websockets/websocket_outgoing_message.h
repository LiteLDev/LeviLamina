#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct websocket_outgoing_message {

public:
    // prevent constructor by default
    websocket_outgoing_message& operator=(websocket_outgoing_message const&) = delete;
    websocket_outgoing_message(websocket_outgoing_message const&)            = delete;
    websocket_outgoing_message()                                             = delete;

public:
    /**
     * @symbol ??1websocket_outgoing_message\@\@QEAA\@XZ
     */
    MCAPI ~websocket_outgoing_message(); // NOLINT
};
