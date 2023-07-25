#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class AggregateFeature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGGREGATEFEATURE
public:
    AggregateFeature& operator=(AggregateFeature const&) = delete;
    AggregateFeature(AggregateFeature const&)            = delete;
    AggregateFeature()                                   = delete;
#endif

public:
};
