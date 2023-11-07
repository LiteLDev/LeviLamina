#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WSConnectionResult.h"
#include "mc/enums/CloseStatusCode.h"
#include "mc/websockets/RakWebSocketClient.h"

class RetryingRakWebSocketClient : public ::RakWebSocketClient {
public:
    // prevent constructor by default
    RetryingRakWebSocketClient& operator=(RetryingRakWebSocketClient const&);
    RetryingRakWebSocketClient(RetryingRakWebSocketClient const&);
    RetryingRakWebSocketClient();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RetryingRakWebSocketClient() = default;

    // NOLINTEND
};
