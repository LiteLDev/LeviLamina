#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketClient : public ::RakWebSocket {
public:
    // prevent constructor by default
    RakWebSocketClient& operator=(RakWebSocketClient const&);
    RakWebSocketClient(RakWebSocketClient const&);
    RakWebSocketClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual void _updateState() /*override*/;

    // vIndex: 9
    virtual uint _genMaskingKey() const /*override*/;

    // vIndex: 0
    virtual ~RakWebSocketClient() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_updateState();

    MCAPI uint $_genMaskingKey() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
