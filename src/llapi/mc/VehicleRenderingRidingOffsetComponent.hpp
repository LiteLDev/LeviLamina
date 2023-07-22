/**
 * @file  VehicleRenderingRidingOffsetComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct VehicleRenderingRidingOffsetComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLERENDERINGRIDINGOFFSETCOMPONENT
public:
    struct VehicleRenderingRidingOffsetComponent& operator=(struct VehicleRenderingRidingOffsetComponent const &) = delete;
    VehicleRenderingRidingOffsetComponent(struct VehicleRenderingRidingOffsetComponent const &) = delete;
    VehicleRenderingRidingOffsetComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0VehicleRenderingRidingOffsetComponent\@\@QEAA\@AEBV?$vector\@URenderingRidingOffsetInfo\@\@V?$allocator\@URenderingRidingOffsetInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI VehicleRenderingRidingOffsetComponent(std::vector<struct RenderingRidingOffsetInfo> const &);

};