#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketClient : public ::RakWebSocket {
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_updateState();

    MCNAPI uint $_genMaskingKey() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
