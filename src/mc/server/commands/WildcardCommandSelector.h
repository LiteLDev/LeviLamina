#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WildcardCommandSelector {
public:
    // prevent constructor by default
    WildcardCommandSelector& operator=(WildcardCommandSelector const&);
    WildcardCommandSelector(WildcardCommandSelector const&);
    WildcardCommandSelector();
};
