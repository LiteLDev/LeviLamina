/**
 * @file  BlockEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventCoordinator.
 *
 */
class BlockEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTCOORDINATOR
public:
    class BlockEventCoordinator& operator=(class BlockEventCoordinator const &) = delete;
    BlockEventCoordinator(class BlockEventCoordinator const &) = delete;
    BlockEventCoordinator() = delete;
#endif

public:
    /**
     * @symbol ?getBlockGameplayHandler\@BlockEventCoordinator\@\@QEAAAEAVBlockGameplayHandler\@\@XZ
     */
    MCAPI class BlockGameplayHandler & getBlockGameplayHandler();
    /**
     * @symbol ?registerBlockGameplayHandler\@BlockEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VBlockGameplayHandler\@\@U?$default_delete\@VBlockGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerBlockGameplayHandler(std::unique_ptr<class BlockGameplayHandler> &&);
    /**
     * @symbol ?sendBlockDestroyedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockDestroyedByPlayer(class Player &, class Block const &, class BlockPos const &);
    /**
     * @symbol ?sendBlockDestructionStarted\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockDestructionStarted(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockDestructionStopped\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI void sendBlockDestructionStopped(class Player &, class BlockPos const &, int);
    /**
     * @symbol ?sendBlockExploded\@BlockEventCoordinator\@\@QEAAXAEAVDimension\@\@AEBVBlockPos\@\@AEBVBlock\@\@PEAVActor\@\@\@Z
     */
    MCAPI void sendBlockExploded(class Dimension &, class BlockPos const &, class Block const &, class Actor *);
    /**
     * @symbol ?sendBlockInPosWillBeDestroyedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockInPosWillBeDestroyedByPlayer(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockInteractedWith\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void sendBlockInteractedWith(class Player &, class BlockPos const &);
    /**
     * @symbol ?sendBlockMovedByPiston\@BlockEventCoordinator\@\@QEAAXAEBVBlockPos\@\@0W4PistonState\@\@\@Z
     */
    MCAPI void sendBlockMovedByPiston(class BlockPos const &, class BlockPos const &, enum class PistonState);
    /**
     * @symbol ?sendBlockPlacedByPlayer\@BlockEventCoordinator\@\@QEAAXAEAVPlayer\@\@AEBVBlock\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI void sendBlockPlacedByPlayer(class Player &, class Block const &, class BlockPos const &, bool);
    /**
     * @symbol ?sendEvent\@BlockEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableBlockGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @symbol ?sendEvent\@BlockEventCoordinator\@\@QEAAXAEBV?$EventRef\@U?$BlockGameplayEvent\@X\@\@\@\@\@Z
     */
    MCAPI void sendEvent(class EventRef<struct BlockGameplayEvent<void>> const &);
    /**
     * @symbol ?sendEvent\@BlockEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@AEBV?$EventRef\@U?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct BlockGameplayEvent<enum class CoordinatorResult>> const &);
    /**
     * @symbol ?sendUnknownBlockReceived\@BlockEventCoordinator\@\@QEAAXAEAVLevel\@\@AEBUNewBlockID\@\@G\@Z
     */
    MCAPI void sendUnknownBlockReceived(class Level &, struct NewBlockID const &, unsigned short);

};
