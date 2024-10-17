#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IgnoreAutomaticFeatureRulesFlag {
public:
    // prevent constructor by default
    IgnoreAutomaticFeatureRulesFlag& operator=(IgnoreAutomaticFeatureRulesFlag const&);
    IgnoreAutomaticFeatureRulesFlag(IgnoreAutomaticFeatureRulesFlag const&);
    IgnoreAutomaticFeatureRulesFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IgnoreAutomaticFeatureRulesFlag() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
