#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleRenderingRidingOffsetComponent {
public:
    // prevent constructor by default
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit VehicleRenderingRidingOffsetComponent(std::vector<struct RenderingRidingOffsetInfo> const&);

    // NOLINTEND
};
