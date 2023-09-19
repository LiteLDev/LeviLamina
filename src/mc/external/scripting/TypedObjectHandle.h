#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
struct TypedObjectHandle {
public:
    // prevent constructor by default
    TypedObjectHandle& operator=(TypedObjectHandle const&);
    TypedObjectHandle(TypedObjectHandle const&);
    TypedObjectHandle();
};

}; // namespace Scripting
