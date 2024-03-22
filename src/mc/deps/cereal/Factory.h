#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

template <typename T0>
class Factory {
public:
    // prevent constructor by default
    Factory& operator=(Factory const&);
    Factory(Factory const&);
    Factory();
};

}; // namespace cereal
