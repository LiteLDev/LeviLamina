#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct AdultRidingHeightOffsetComponent;
struct RidingHeightComponent;
// clang-format on

namespace GetRidingHeightUtility {
// functions
// NOLINTBEGIN
MCAPI float getRidingHeight(
    ::ActorDataFlagComponent const&           data,
    ::RidingHeightComponent const*            ridingHeightComponent,
    ::AdultRidingHeightOffsetComponent const* adultRidingHeightOffsetComponent,
    float                                     heightOffset
);
// NOLINTEND

} // namespace GetRidingHeightUtility
