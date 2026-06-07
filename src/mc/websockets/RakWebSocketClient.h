#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/RakWebSocket.h"

class RakWebSocketClient : public ::RakWebSocket {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _updateState() /*override*/;

    virtual uint _genMaskingKey() const /*override*/;
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
