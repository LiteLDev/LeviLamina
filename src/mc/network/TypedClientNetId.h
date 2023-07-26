#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, int T2>
class TypedClientNetId {

public:
    // prevent constructor by default
    TypedClientNetId& operator=(TypedClientNetId const&) = delete;
    TypedClientNetId(TypedClientNetId const&)            = delete;
    TypedClientNetId()                                   = delete;
};
