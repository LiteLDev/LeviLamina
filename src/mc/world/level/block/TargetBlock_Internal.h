#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetBlock_Internal {
// NOLINTBEGIN
MCAPI void createPoweredBlockComponentAtPos(class BlockSource& region, class BlockPos const& pos);

MCAPI void
sendTargetBlockHitTelemetryEvent(class BlockSource& region, class Actor const& projectile, int signalStrength);
// NOLINTEND

}; // namespace TargetBlock_Internal
