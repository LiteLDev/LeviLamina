#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetBlock_Internal {
// NOLINTBEGIN
// symbol: ?createPoweredBlockComponentAtPos@TargetBlock_Internal@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI void createPoweredBlockComponentAtPos(class BlockSource& region, class BlockPos const& pos);

// symbol: ?sendTargetBlockHitTelemetryEvent@TargetBlock_Internal@@YAXAEAVBlockSource@@AEBVActor@@H@Z
MCAPI void
sendTargetBlockHitTelemetryEvent(class BlockSource& region, class Actor const& projectile, int signalStrength);
// NOLINTEND

}; // namespace TargetBlock_Internal
