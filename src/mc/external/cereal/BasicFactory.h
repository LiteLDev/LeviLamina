#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

template <typename T0>
class BasicFactory {
public:
    // prevent constructor by default
    BasicFactory& operator=(BasicFactory const&);
    BasicFactory(BasicFactory const&);
    BasicFactory();
};

}; // namespace cereal
