#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8ae014;
    ::ll::UntypedStorage<1, 1>  mUnke71cf2;
    ::ll::UntypedStorage<1, 1>  mUnk5c0bb2;
    ::ll::UntypedStorage<1, 1>  mUnk7c038b;
    ::ll::UntypedStorage<2, 2>  mUnk61adfe;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&);
    ReplayStateConfig(ReplayStateConfig const&);
    ReplayStateConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setReplayStateConfigThresholds(float baseThreshold);
    // NOLINTEND
};
