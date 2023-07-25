#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

class websocket_message_buffer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_WEBSOCKET_MESSAGE_BUFFER
public:
    websocket_message_buffer& operator=(websocket_message_buffer const&) = delete;
    websocket_message_buffer(websocket_message_buffer const&)            = delete;
    websocket_message_buffer()                                           = delete;
#endif

public:
    /**
     * @symbol ??1websocket_message_buffer\@httpclient\@xbox\@\@QEAA\@XZ
     */
    MCAPI ~websocket_message_buffer();
};

}; // namespace xbox::httpclient
