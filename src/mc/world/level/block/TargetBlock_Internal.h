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
MCNAPI void sendTargetBlockHitTelemetryEvent(::BlockSource& region, ::Actor const& projectile, int signalStrength);
// NOLINTEND

} // namespace TargetBlock_Internal
