#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WildcardCommandSelector {

public:
    // prevent constructor by default
    WildcardCommandSelector& operator=(WildcardCommandSelector const&) = delete;
    WildcardCommandSelector(WildcardCommandSelector const&)            = delete;
    WildcardCommandSelector()                                          = delete;
};
