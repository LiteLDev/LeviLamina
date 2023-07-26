#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpWebSocketExports {

public:
    // prevent constructor by default
    WinHttpWebSocketExports& operator=(WinHttpWebSocketExports const&) = delete;
    WinHttpWebSocketExports(WinHttpWebSocketExports const&)            = delete;
    WinHttpWebSocketExports()                                          = delete;
};

}; // namespace xbox::httpclient
