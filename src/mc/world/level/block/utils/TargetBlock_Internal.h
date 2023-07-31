#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetBlock_Internal {
// NOLINTBEGIN
/**
 * @symbol ?createPoweredBlockComponentAtPos\@TargetBlock_Internal\@\@YAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI void createPoweredBlockComponentAtPos(class BlockSource&, class BlockPos const&);
/**
 * @symbol ?sendTargetBlockHitTelemetryEvent\@TargetBlock_Internal\@\@YAXAEAVBlockSource\@\@AEBVActor\@\@H\@Z
 */
MCAPI void sendTargetBlockHitTelemetryEvent(class BlockSource&, class Actor const&, int);
// NOLINTEND

}; // namespace TargetBlock_Internal
