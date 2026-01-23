#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RenderingRidingOffsetInfo;
// clang-format on

struct VehicleRenderingRidingOffsetComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderingRidingOffsetInfo>> mOffsetsInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleRenderingRidingOffsetComponent& operator=(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent(VehicleRenderingRidingOffsetComponent const&);
    VehicleRenderingRidingOffsetComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::VehicleRenderingRidingOffsetComponent& operator=(::VehicleRenderingRidingOffsetComponent&&);
    // NOLINTEND
};
