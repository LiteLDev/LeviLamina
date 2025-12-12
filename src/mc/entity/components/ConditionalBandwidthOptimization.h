#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ConditionalBandwidthOptimization {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka93dbc;
    ::ll::UntypedStorage<8, 8>  mUnkda7886;
    ::ll::UntypedStorage<1, 1>  mUnk640ded;
    ::ll::UntypedStorage<8, 64> mUnkf1bed1;
    // NOLINTEND

public:
    // prevent constructor by default
    ConditionalBandwidthOptimization& operator=(ConditionalBandwidthOptimization const&);
    ConditionalBandwidthOptimization(ConditionalBandwidthOptimization const&);
    ConditionalBandwidthOptimization();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ConditionalBandwidthOptimization();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
