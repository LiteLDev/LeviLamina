#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

class PlatformArguments {

public:
    // prevent constructor by default
    PlatformArguments& operator=(PlatformArguments const&) = delete;
    PlatformArguments(PlatformArguments const&)            = delete;
    PlatformArguments()                                    = delete;
};

}; // namespace Webview
