#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
class Factory {
public:
    // prevent constructor by default
    Factory& operator=(Factory const&);
    Factory(Factory const&);
    Factory();
};
