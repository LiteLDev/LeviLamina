#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct StaticComponentTrackingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9f5bc9;
    ::ll::UntypedStorage<8, 24> mUnk2d5c55;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticComponentTrackingData& operator=(StaticComponentTrackingData const&);
    StaticComponentTrackingData(StaticComponentTrackingData const&);
    StaticComponentTrackingData();
};

} // namespace Social::Events
