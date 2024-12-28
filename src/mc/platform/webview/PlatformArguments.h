#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

class PlatformArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk893618;
    ::ll::UntypedStorage<8, 24> mUnkb5734d;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformArguments& operator=(PlatformArguments const&);
    PlatformArguments(PlatformArguments const&);
    PlatformArguments();
};

} // namespace Webview
