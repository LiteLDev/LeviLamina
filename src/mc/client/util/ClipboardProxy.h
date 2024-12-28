#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class ClipboardProxy {
public:
    // prevent constructor by default
    ClipboardProxy& operator=(ClipboardProxy const&);
    ClipboardProxy(ClipboardProxy const&);
    ClipboardProxy();
};
