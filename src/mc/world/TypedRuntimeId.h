#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int32_t T2>
class TypedRuntimeId {

public:
    // prevent constructor by default
    TypedRuntimeId& operator=(TypedRuntimeId const&) = delete;
    TypedRuntimeId(TypedRuntimeId const&)            = delete;
    TypedRuntimeId()                                 = delete;
};
