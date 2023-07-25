#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureLoading {

template <typename T0>
struct ConcreteFeatureHolder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURELOADING_CONCRETEFEATUREHOLDER
public:
    ConcreteFeatureHolder& operator=(ConcreteFeatureHolder const&) = delete;
    ConcreteFeatureHolder(ConcreteFeatureHolder const&)            = delete;
    ConcreteFeatureHolder()                                        = delete;
#endif

public:
};

}; // namespace FeatureLoading
