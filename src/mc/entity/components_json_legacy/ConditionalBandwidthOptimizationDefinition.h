#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ConditionalBandwidthOptimization;
// clang-format on

class ConditionalBandwidthOptimizationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk57460f;
    ::ll::UntypedStorage<8, 24> mUnkb3afaa;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationDefinition& operator=(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition(ConditionalBandwidthOptimizationDefinition const&);
    ConditionalBandwidthOptimizationDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addConditionalBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCNAPI void addDefaultBandwidthOptimization(::ConditionalBandwidthOptimization const& optimization);

    MCNAPI ~ConditionalBandwidthOptimizationDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
