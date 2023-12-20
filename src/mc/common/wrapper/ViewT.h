#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename... T1>
class ViewT {
public:
    // prevent constructor by default
    ViewT& operator=(ViewT const&);
    ViewT(ViewT const&);
    ViewT();
};
