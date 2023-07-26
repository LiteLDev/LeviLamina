#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
struct TypedObjectHandle {

public:
    // prevent constructor by default
    TypedObjectHandle& operator=(TypedObjectHandle const&) = delete;
    TypedObjectHandle(TypedObjectHandle const&)            = delete;
    TypedObjectHandle()                                    = delete;
};

}; // namespace Scripting
