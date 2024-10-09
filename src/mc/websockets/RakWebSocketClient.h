#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/RakWebSocket.h"
#include "mc/websockets/WSConnectionResult.h"

class RakWebSocketClient : public ::RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocketClient& operator=(RakWebSocketClient const&);
    RakWebSocketClient(RakWebSocketClient const&);
    RakWebSocketClient();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakWebSocketClient();

    // vIndex: 8
    virtual void _updateState();

    // vIndex: 9
    virtual uint _genMaskingKey() const;

    MCAPI explicit RakWebSocketClient(std::unique_ptr<class TcpProxy> proxy);

    // NOLINTEND
};
