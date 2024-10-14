#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConditionalBandwidthOptimizationComponent {
public:
    // prevent constructor by default
    ConditionalBandwidthOptimizationComponent& operator=(ConditionalBandwidthOptimizationComponent const&);
    ConditionalBandwidthOptimizationComponent(ConditionalBandwidthOptimizationComponent const&);
    ConditionalBandwidthOptimizationComponent();

public:
    // NOLINTBEGIN
    MCAPI ConditionalBandwidthOptimizationComponent(class ConditionalBandwidthOptimizationComponent&&);

    MCAPI struct ConditionalBandwidthOptimization getCurrentOptimizationValues(class Actor& owner);

    MCAPI void initFromDefinition(class Actor& actor, class ConditionalBandwidthOptimizationDefinition const& def);

    MCAPI class ConditionalBandwidthOptimizationComponent& operator=(class ConditionalBandwidthOptimizationComponent&&);

    MCAPI ~ConditionalBandwidthOptimizationComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
