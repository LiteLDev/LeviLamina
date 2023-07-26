#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1, typename... T2>
class ViewT {

public:
    // prevent constructor by default
    ViewT& operator=(ViewT const&) = delete;
    ViewT(ViewT const&)            = delete;
    ViewT()                        = delete;
};
