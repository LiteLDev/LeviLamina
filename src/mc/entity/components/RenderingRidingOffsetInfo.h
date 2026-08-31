#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderingRidingOffsetInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk81f77f;
    ::ll::UntypedStorage<8, 48> mUnk95c72e;
    ::ll::UntypedStorage<4, 4>  mUnkab7ce9;
    ::ll::UntypedStorage<8, 8>  mUnk6782f5;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingRidingOffsetInfo& operator=(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo();
};
