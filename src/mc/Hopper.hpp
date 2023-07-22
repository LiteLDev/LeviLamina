/**
 * @file  Hopper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Hopper.
 *
 */
class Hopper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPER
public:
    class Hopper& operator=(class Hopper const &) = delete;
    Hopper(class Hopper const &) = delete;
    Hopper() = delete;
#endif

public:
    /**
     * @symbol  ??0Hopper\@\@QEAA\@H_N\@Z
     */
    MCAPI Hopper(int, bool);
    /**
     * @symbol  ?getCooldownTime\@Hopper\@\@QEBAHXZ
     */
    MCAPI int getCooldownTime() const;
    /**
     * @symbol  ?isOnCooldown\@Hopper\@\@QEBA_NXZ
     */
    MCAPI bool isOnCooldown() const;
    /**
     * @symbol  ?setCooldownTime\@Hopper\@\@QEAAXH\@Z
     */
    MCAPI void setCooldownTime(int);

//protected:
    /**
     * @symbol  ?_addItem\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEAVItemStack\@\@HH\@Z
     */
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    /**
     * @symbol  ?_getAttachedContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol  ?_getAttachedContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int);
    /**
     * @symbol  ?_getContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);
    /**
     * @symbol  ?_getContainersAt\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);
    /**
     * @symbol  ?_getSourceContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);
    /**
     * @symbol  ?_isEmptyContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isEmptyContainer(class Container &, int);
    /**
     * @symbol  ?_isFullContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isFullContainer(class Container &, int);
    /**
     * @symbol  ?_pushOutItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int);
    /**
     * @symbol  ?_tryMoveItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H_N\@Z
     */
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int, bool);
    /**
     * @symbol  ?_tryPullInItemsFromAboveContainer\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);
    /**
     * @symbol  ?_tryPushToComposter\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@VBlockPos\@\@H\@Z
     */
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int);
    /**
     * @symbol  ?_tryTakeInItemFromSlot\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@1HH\@Z
     */
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource &, class Container &, class Container &, int, int);

//private:
    /**
     * @symbol  ?_tryAddItemsFromPos\@Hopper\@\@AEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool _tryAddItemsFromPos(class BlockSource &, class Container &, class Vec3 const &);

protected:

private:

};