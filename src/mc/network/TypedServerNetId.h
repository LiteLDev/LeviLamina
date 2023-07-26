#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedServerNetId {

public:
    // prevent constructor by default
    TypedServerNetId& operator=(TypedServerNetId const&) = delete;
    TypedServerNetId(TypedServerNetId const&)            = delete;
    TypedServerNetId()                                   = delete;
};
