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
    // symbol:
    // ??0VehicleRenderingRidingOffsetComponent@@QEAA@AEBV?$vector@URenderingRidingOffsetInfo@@V?$allocator@URenderingRidingOffsetInfo@@@std@@@std@@@Z
    MCAPI explicit VehicleRenderingRidingOffsetComponent(std::vector<struct RenderingRidingOffsetInfo> const&);

    // NOLINTEND
};
