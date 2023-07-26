#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class websocket_message_buffer {

public:
    // prevent constructor by default
    websocket_message_buffer& operator=(websocket_message_buffer const&) = delete;
    websocket_message_buffer(websocket_message_buffer const&)            = delete;
    websocket_message_buffer()                                           = delete;

public:
    /**
     * @symbol ??1websocket_message_buffer\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~websocket_message_buffer(); // NOLINT
};

}; // namespace xbox::httpclient
