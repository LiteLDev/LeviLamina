#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class SelectorIterator {
public:
    // prevent constructor by default
    SelectorIterator& operator=(SelectorIterator const&);
    SelectorIterator(SelectorIterator const&);
    SelectorIterator();
};
