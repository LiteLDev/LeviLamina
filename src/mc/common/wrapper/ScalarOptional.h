#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class ScalarOptional {
public:
    // prevent constructor by default
    ScalarOptional& operator=(ScalarOptional const&);
    ScalarOptional(ScalarOptional const&);
    ScalarOptional();
};
