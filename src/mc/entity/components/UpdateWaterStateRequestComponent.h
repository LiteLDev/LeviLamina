#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateWaterStateRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6b00dc;
    ::ll::UntypedStorage<1, 1>  mUnk4413c9;
    ::ll::UntypedStorage<1, 1>  mUnk78b058;
    ::ll::UntypedStorage<1, 1>  mUnke7d7ae;
    ::ll::UntypedStorage<4, 12> mUnkc407c9;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateWaterStateRequestComponent& operator=(UpdateWaterStateRequestComponent const&);
    UpdateWaterStateRequestComponent(UpdateWaterStateRequestComponent const&);
    UpdateWaterStateRequestComponent();
};
