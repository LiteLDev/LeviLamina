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
    VehicleRenderingRidingOffsetComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VehicleRenderingRidingOffsetComponent(::std::vector<::RenderingRidingOffsetInfo> const& offsetsInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::RenderingRidingOffsetInfo> const& offsetsInfo);
    // NOLINTEND
};
