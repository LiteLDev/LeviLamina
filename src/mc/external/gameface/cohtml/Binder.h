#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class Binder {
public:
    // Binder inner types define
    enum class BindingMode : int {
        Value       = 0,
        Scoped      = 1,
        GetTypeInfo = 2,
    };
};

} // namespace cohtml
