#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ConditionalBandwidthOptimization;
struct Tick;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent const&);

    MCAPI ConditionalBandwidthOptimizationComponent(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI ::ConditionalBandwidthOptimization getCurrentOptimizationValues(::Actor& owner);

    MCAPI ::ConditionalBandwidthOptimizationComponent& operator=(::ConditionalBandwidthOptimizationComponent&&);

    MCAPI ~ConditionalBandwidthOptimizationComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent const&);

    MCAPI void* $ctor(::ConditionalBandwidthOptimizationComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
