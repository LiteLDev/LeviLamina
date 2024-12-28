#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

namespace TargetBlock_Internal {
// functions
// NOLINTBEGIN
MCAPI void createPoweredBlockComponentAtPos(::BlockSource& region, ::BlockPos const& pos);

MCAPI void sendTargetBlockHitTelemetryEvent(::BlockSource& region, ::Actor const& projectile, int signalStrength);
// NOLINTEND

} // namespace TargetBlock_Internal
