#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class WeakTypedObjectHandle {
public:
    // prevent constructor by default
    WeakTypedObjectHandle& operator=(WeakTypedObjectHandle const&);
    WeakTypedObjectHandle(WeakTypedObjectHandle const&);
    WeakTypedObjectHandle();
};

}; // namespace Scripting
