#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct DynamicComponentTrackingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4daad0;
    ::ll::UntypedStorage<8, 24> mUnk1a50bb;
    ::ll::UntypedStorage<8, 24> mUnk13493e;
    ::ll::UntypedStorage<8, 8>  mUnk809236;
    ::ll::UntypedStorage<4, 8>  mUnk82f9cc;
    ::ll::UntypedStorage<4, 8>  mUnke795b1;
    ::ll::UntypedStorage<4, 8>  mUnked7180;
    ::ll::UntypedStorage<4, 8>  mUnk6d8192;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicComponentTrackingData& operator=(DynamicComponentTrackingData const&);
    DynamicComponentTrackingData(DynamicComponentTrackingData const&);
    DynamicComponentTrackingData();
};

} // namespace Social::Events
