#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class WeakFromThisBase {
public:
    // prevent constructor by default
    WeakFromThisBase& operator=(WeakFromThisBase const&);
    WeakFromThisBase(WeakFromThisBase const&);
    WeakFromThisBase();
};

} // namespace Scripting
