#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class WeakHandleFromThis {
public:
    // prevent constructor by default
    WeakHandleFromThis& operator=(WeakHandleFromThis const&);
    WeakHandleFromThis(WeakHandleFromThis const&);
    WeakHandleFromThis();
};

} // namespace Scripting
