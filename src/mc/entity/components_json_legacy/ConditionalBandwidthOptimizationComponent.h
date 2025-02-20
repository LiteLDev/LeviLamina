#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ConditionalBandwidthOptimization;
// clang-format on

class ConditionalBandwidthOptimizationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk701afe;
    ::ll::UntypedStorage<8, 24> mUnk15cd24;
    ::ll::UntypedStorage<8, 8>  mUnk6bcc56;
    ::ll::UntypedStorage<8, 88> mUnke91296;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationComponent& operator=(ConditionalBandwidthOptimizationComponent const&);
    ConditionalBandwidthOptimizationComponent();

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
