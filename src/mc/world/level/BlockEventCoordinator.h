#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MutableBlockGameplayEvent.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/level/block/utils/BlockGameplayEvent.h"

class BlockEventCoordinator {

public:
    // prevent constructor by default
    BlockEventCoordinator& operator=(BlockEventCoordinator const&) = delete;
    BlockEventCoordinator(BlockEventCoordinator const&)            = delete;
    BlockEventCoordinator()                                        = delete;

public:
    /**
     * @symbol ?getBlockGameplayHandler\@BlockEventCoordinator\@\@QEAAAEAVBlockGameplayHandler\@\@XZ
     */
    MCAPI class BlockGameplayHandler& getBlockGameplayHandler(); // NOLINT
    /**
     * @symbol
     * ?registerBlockGameplayHandler\@BlockEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VBlockGameplayHandler\@\@U?$default_delete\@VBlockGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockGameplayHandler(std::unique_ptr<class BlockGameplayHandler>&&); // NOLINT
    /**
     * @symbol ?sendBlockDestroyedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?sendBlockDestructionStarted\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI void sendBlockDestructionStarted(class Player&, class BlockPos const&, unsigned char); // NOLINT
    /**
     * @symbol ?sendBlockDestructionStopped\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void sendBlockDestructionStopped(class Player&, class BlockPos const&, int); // NOLINT
    /**
     * @symbol
     * ?sendBlockExploded\@BlockEventCoordinator\@\@QEAAXAEAVDimension\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    MCAPI void sendBlockExploded(class Dimension&, class BlockPos const&, class Block const&, class Actor*); // NOLINT
    /**
     * @symbol ?sendBlockInPosWillBeDestroyedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockInPosWillBeDestroyedByPlayer(class Player&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?sendBlockInteractedWith\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockInteractedWith(class Player&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?sendBlockMovedByPiston\@BlockEventCoordinator\@\@QEAAXAEBVBlockPos\@\@0W4PistonState\@\@\@Z
     */
    MCAPI void sendBlockMovedByPiston(class BlockPos const&, class BlockPos const&, enum class PistonState); // NOLINT
    /**
     * @symbol ?sendBlockPlacedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void sendBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?sendEvent\@BlockEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$BlockGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct BlockGameplayEvent<void>> const&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@BlockEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
    sendEvent(class EventRef<struct BlockGameplayEvent<enum class CoordinatorResult>> const&); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@BlockEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct MutableBlockGameplayEvent<enum class CoordinatorResult>>); // NOLINT
    /**
     * @symbol ?sendUnknownBlockReceived\@BlockEventCoordinator\@\@QEAAXAEAVLevel\@\@AEBUNewBlockID\@\@G\@Z
     */
    MCAPI void sendUnknownBlockReceived(class Level&, struct NewBlockID const&, unsigned short); // NOLINT
};
