#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

class PlatformArguments {
public:
    // prevent constructor by default
    PlatformArguments& operator=(PlatformArguments const&);
    PlatformArguments(PlatformArguments const&);
    PlatformArguments();
};

}; // namespace Webview
