#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ConditionalBandwidthOptimization.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ConditionalBandwidthOptimizationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mDefaultValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::ConditionalBandwidthOptimization>> mConditionalValues;
    ::ll::TypedStorage<8, 8, ::Tick>                                             mLastRequestedValuesTick;
    ::ll::TypedStorage<8, 88, ::ConditionalBandwidthOptimization>                mCachedOptimizationValues;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationComponent& operator=(ConditionalBandwidthOptimizationComponent const&);
    ConditionalBandwidthOptimizationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent const&);

    MCAPI ::ConditionalBandwidthOptimization getCurrentOptimizationValues(::Actor& owner);

    MCAPI ::ConditionalBandwidthOptimizationComponent& operator=(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI ~ConditionalBandwidthOptimizationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
