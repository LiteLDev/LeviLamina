#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

template <typename T0>
struct ConcreteFeatureHolder {
public:
    // prevent constructor by default
    ConcreteFeatureHolder& operator=(ConcreteFeatureHolder const&);
    ConcreteFeatureHolder(ConcreteFeatureHolder const&);
    ConcreteFeatureHolder();
};

}; // namespace FeatureLoading
