#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleRenderingRidingOffsetComponent {

public:
    // prevent constructor by default
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&) = delete;
    VehicleRenderingRidingOffsetComponent(VehicleRenderingRidingOffsetComponent const&)            = delete;
    VehicleRenderingRidingOffsetComponent()                                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0VehicleRenderingRidingOffsetComponent\@\@QEAA\@AEBV?$vector\@URenderingRidingOffsetInfo\@\@V?$allocator\@URenderingRidingOffsetInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VehicleRenderingRidingOffsetComponent(std::vector<struct RenderingRidingOffsetInfo> const&);
    // NOLINTEND
};
