#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VehicleRenderingRidingOffsetComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLERENDERINGRIDINGOFFSETCOMPONENT
public:
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&) = delete;
    VehicleRenderingRidingOffsetComponent(VehicleRenderingRidingOffsetComponent const&)            = delete;
    VehicleRenderingRidingOffsetComponent()                                                        = delete;
#endif

public:
    /**
     * @symbol
     * ??0VehicleRenderingRidingOffsetComponent\@\@QEAA\@AEBV?$vector\@URenderingRidingOffsetInfo\@\@V?$allocator\@URenderingRidingOffsetInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VehicleRenderingRidingOffsetComponent(std::vector<struct RenderingRidingOffsetInfo> const&);
};
