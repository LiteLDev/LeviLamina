#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpWebSocketExports {
public:
    // prevent constructor by default
    WinHttpWebSocketExports& operator=(WinHttpWebSocketExports const&);
    WinHttpWebSocketExports(WinHttpWebSocketExports const&);
    WinHttpWebSocketExports();
};

}; // namespace xbox::httpclient
