#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class Binder {
public:
    // Binder inner types define
    enum class BindingMode : int {
        Value              = 0,
        Scoped             = 1,
        ScopedSafe         = 2,
        ScopedSafeKeyValue = 3,
        GetTypeInfo        = 4,
    };
};

} // namespace cohtml
