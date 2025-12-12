#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

enum class ConnectionState : uint {
    Initialized        = 0,
    WinHttpRunning     = 1,
    WebSocketConnected = 2,
    WebSocketClosing   = 3,
    WinHttpClosing     = 4,
    Closed             = 5,
};

}
