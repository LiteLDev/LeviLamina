#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

class PlatformArguments {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBVIEW_PLATFORMARGUMENTS
public:
    PlatformArguments& operator=(PlatformArguments const&) = delete;
    PlatformArguments(PlatformArguments const&)            = delete;
    PlatformArguments()                                    = delete;
#endif

public:
};

}; // namespace Webview
