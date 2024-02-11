#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
struct ViewIterator {
public:
    // prevent constructor by default
    ViewIterator& operator=(ViewIterator const&);
    ViewIterator(ViewIterator const&);
    ViewIterator();
};
