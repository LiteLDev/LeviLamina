#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

template <typename T0>
struct ConcreteFeatureHolder {

public:
    // prevent constructor by default
    ConcreteFeatureHolder& operator=(ConcreteFeatureHolder const&) = delete;
    ConcreteFeatureHolder(ConcreteFeatureHolder const&)            = delete;
    ConcreteFeatureHolder()                                        = delete;
};

}; // namespace FeatureLoading
