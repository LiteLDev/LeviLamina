#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct WinHttpCallbackContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc8b982;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttpCallbackContext& operator=(WinHttpCallbackContext const&);
    WinHttpCallbackContext(WinHttpCallbackContext const&);
    WinHttpCallbackContext();
};

} // namespace xbox::httpclient
