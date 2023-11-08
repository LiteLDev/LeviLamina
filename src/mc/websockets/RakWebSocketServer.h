#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketServer : public ::RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocketServer& operator=(RakWebSocketServer const&);
    RakWebSocketServer(RakWebSocketServer const&);
    RakWebSocketServer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RakWebSocketServer@@UEAA@XZ
    virtual ~RakWebSocketServer() = default;

    // NOLINTEND
};
