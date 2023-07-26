#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class StrongTypedObjectHandle {

public:
    // prevent constructor by default
    StrongTypedObjectHandle& operator=(StrongTypedObjectHandle const&) = delete;
    StrongTypedObjectHandle(StrongTypedObjectHandle const&)            = delete;
    StrongTypedObjectHandle()                                          = delete;
};

}; // namespace Scripting
