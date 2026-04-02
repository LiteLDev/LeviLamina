#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mDefaultValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalBandwidthOptimization>> mConditionalValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
