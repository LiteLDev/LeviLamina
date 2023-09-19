#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpCallbackContext {
public:
    // prevent constructor by default
    WinHttpCallbackContext& operator=(WinHttpCallbackContext const&);
    WinHttpCallbackContext(WinHttpCallbackContext const&);
    WinHttpCallbackContext();
};

}; // namespace xbox::httpclient
