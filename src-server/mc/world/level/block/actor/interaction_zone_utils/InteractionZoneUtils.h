#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/interaction_zone_utils/HitZoneType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace InteractionZoneUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<int> calculateHitSlot(::Vec3 const& blockHit, uchar hitFace, ::InteractionZoneUtils::HitZoneType hitZoneType);
// NOLINTEND

}
