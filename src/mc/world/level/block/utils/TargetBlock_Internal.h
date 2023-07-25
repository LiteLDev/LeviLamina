#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetBlock_Internal {
/**
 * @symbol ?createPoweredBlockComponentAtPos\@TargetBlock_Internal\@\@YAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
 */
MCAPI void createPoweredBlockComponentAtPos(class BlockSource&, class BlockPos const&);
/**
 * @symbol ?sendTargetBlockHitTelemetryEvent\@TargetBlock_Internal\@\@YAXAEAVBlockSource\@\@AEBVActor\@\@H\@Z
 */
MCAPI void sendTargetBlockHitTelemetryEvent(class BlockSource&, class Actor const&, int);

}; // namespace TargetBlock_Internal
