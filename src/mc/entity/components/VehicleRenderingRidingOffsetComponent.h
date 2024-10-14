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
    MCAPI explicit VehicleRenderingRidingOffsetComponent(
        std::vector<struct RenderingRidingOffsetInfo> const& offsetsInfo
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
