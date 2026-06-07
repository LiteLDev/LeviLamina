#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/WebSocketPacketData.h"

struct AutomationClientConnectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::WebSocketPacketData> mWebSocketData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AutomationClientConnectPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
