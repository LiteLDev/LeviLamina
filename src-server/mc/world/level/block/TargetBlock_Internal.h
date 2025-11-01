#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
// clang-format on

namespace TargetBlock_Internal {
// functions
// NOLINTBEGIN
MCAPI void sendTargetBlockHitTelemetryEvent(::BlockSource& region, ::Actor const& projectile, int signalStrength);
// NOLINTEND

}
