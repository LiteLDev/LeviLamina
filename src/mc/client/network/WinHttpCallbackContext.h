#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpCallbackContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XBOX_HTTPCLIENT_WINHTTPCALLBACKCONTEXT
public:
    WinHttpCallbackContext& operator=(WinHttpCallbackContext const&) = delete;
    WinHttpCallbackContext(WinHttpCallbackContext const&)            = delete;
    WinHttpCallbackContext()                                         = delete;
#endif

public:
};

}; // namespace xbox::httpclient
