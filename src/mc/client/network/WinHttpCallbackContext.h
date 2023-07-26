#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpCallbackContext {

public:
    // prevent constructor by default
    WinHttpCallbackContext& operator=(WinHttpCallbackContext const&) = delete;
    WinHttpCallbackContext(WinHttpCallbackContext const&)            = delete;
    WinHttpCallbackContext()                                         = delete;
};

}; // namespace xbox::httpclient
