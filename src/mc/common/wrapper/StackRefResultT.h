#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class StackRefResultT {

public:
    // prevent constructor by default
    StackRefResultT& operator=(StackRefResultT const&) = delete;
    StackRefResultT(StackRefResultT const&)            = delete;
    StackRefResultT()                                  = delete;
};
