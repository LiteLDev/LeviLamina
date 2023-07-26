#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Hopper {

public:
    // prevent constructor by default
    Hopper& operator=(Hopper const&) = delete;
    Hopper(Hopper const&)            = delete;
    Hopper()                         = delete;

public:
    /**
     * @symbol ??0Hopper\@\@QEAA\@H_N\@Z
     */
    MCAPI Hopper(int, bool); // NOLINT
    /**
     * @symbol ?getCooldownTime\@Hopper\@\@QEBAHXZ
     */
    MCAPI int getCooldownTime() const; // NOLINT
    /**
     * @symbol ?isOnCooldown\@Hopper\@\@QEBA_NXZ
     */
    MCAPI bool isOnCooldown() const; // NOLINT
    /**
     * @symbol ?setCooldownTime\@Hopper\@\@QEAAXH\@Z
     */
    MCAPI void setCooldownTime(int); // NOLINT

    // protected:
    /**
     * @symbol ?_addItem\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEAVItemStack\@\@HH\@Z
     */
    MCAPI bool _addItem(class BlockSource&, class Container&, class ItemStack&, int, int); // NOLINT
    /**
     * @symbol ?_getAttachedContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class Container* _getAttachedContainerInBlock(class BlockSource&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol
     * ?_getAttachedContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI std::vector<class Container*> _getAttachedContainers(class BlockSource&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?_getContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Container* _getContainerInBlock(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?_getContainersAt\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container*> _getContainersAt(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol
     * ?_getSourceContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container*> _getSourceContainers(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?_isEmptyContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isEmptyContainer(class Container&, int); // NOLINT
    /**
     * @symbol ?_isFullContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isFullContainer(class Container&, int); // NOLINT
    /**
     * @symbol ?_pushOutItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI bool _pushOutItems(class BlockSource&, class Container&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?_tryMoveItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H_N\@Z
     */
    MCAPI bool _tryMoveItems(class BlockSource&, class Container&, class Vec3 const&, int, bool); // NOLINT
    /**
     * @symbol ?_tryPullInItemsFromAboveContainer\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource&, class Container&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?_tryPushToComposter\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@VBlockPos\@\@H\@Z
     */
    MCAPI bool _tryPushToComposter(class BlockSource&, class Container&, class BlockPos, int); // NOLINT
    /**
     * @symbol ?_tryTakeInItemFromSlot\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@1HH\@Z
     */
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource&, class Container&, class Container&, int, int); // NOLINT

    // private:
    /**
     * @symbol ?_tryAddItemsFromPos\@Hopper\@\@AEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool _tryAddItemsFromPos(class BlockSource&, class Container&, class Vec3 const&); // NOLINT

protected:
private:
};
