#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class WeakTypedObjectHandle {

public:
    // prevent constructor by default
    WeakTypedObjectHandle& operator=(WeakTypedObjectHandle const&) = delete;
    WeakTypedObjectHandle(WeakTypedObjectHandle const&)            = delete;
    WeakTypedObjectHandle()                                        = delete;
};

}; // namespace Scripting
