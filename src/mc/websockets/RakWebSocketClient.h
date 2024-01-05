#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketClient : public ::RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocketClient& operator=(RakWebSocketClient const&);
    RakWebSocketClient(RakWebSocketClient const&);
    RakWebSocketClient();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RakWebSocketClient@@UEAA@XZ
    virtual ~RakWebSocketClient();

    // vIndex: 8, symbol: ?_updateState@RakWebSocketClient@@MEAAXXZ
    virtual void _updateState();

    // vIndex: 9, symbol: ?_genMaskingKey@RakWebSocketClient@@MEBAIXZ
    virtual uint _genMaskingKey() const;

    // symbol: ??0RakWebSocketClient@@QEAA@V?$unique_ptr@VTcpProxy@@U?$default_delete@VTcpProxy@@@std@@@std@@@Z
    MCAPI explicit RakWebSocketClient(std::unique_ptr<class TcpProxy> proxy);

    // NOLINTEND
};
