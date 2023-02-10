/**
 * @file  Hopper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1039849414
     * @symbol  ??0Hopper\@\@QEAA\@H_N\@Z
     */
    MCAPI Hopper(int, bool);
    /**
     * @hash   376508486
     * @symbol  ?getCooldownTime\@Hopper\@\@QEBAHXZ
     */
    MCAPI int getCooldownTime() const;
    /**
     * @hash   -1269457890
     * @symbol  ?isOnCooldown\@Hopper\@\@QEBA_NXZ
     */
    MCAPI bool isOnCooldown() const;
    /**
     * @hash   -2098384264
     * @symbol  ?setCooldownTime\@Hopper\@\@QEAAXH\@Z
     */
    MCAPI void setCooldownTime(int);

//protected:
    /**
     * @hash   -975492958
     * @symbol  ?_addItem\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEAVItemStack\@\@HH\@Z
     */
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    /**
     * @hash   -1582434133
     * @symbol  ?_getAttachedContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int);
    /**
     * @hash   1228867532
     * @symbol  ?_getAttachedContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int);
    /**
     * @hash   -389300544
     * @symbol  ?_getContainerInBlock\@Hopper\@\@IEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -658332846
     * @symbol  ?_getContainersAt\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);
    /**
     * @hash   2111257434
     * @symbol  ?_getSourceContainers\@Hopper\@\@IEAA?AV?$vector\@PEAVContainer\@\@V?$allocator\@PEAVContainer\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -830972022
     * @symbol  ?_isEmptyContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isEmptyContainer(class Container &, int);
    /**
     * @hash   -67521178
     * @symbol  ?_isFullContainer\@Hopper\@\@IEAA_NAEAVContainer\@\@H\@Z
     */
    MCAPI bool _isFullContainer(class Container &, int);
    /**
     * @hash   -708113808
     * @symbol  ?_pushOutItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int);
    /**
     * @hash   -1892492708
     * @symbol  ?_tryMoveItems\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@H_N\@Z
     */
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int, bool);
    /**
     * @hash   -2086035582
     * @symbol  ?_tryPullInItemsFromAboveContainer\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);
    /**
     * @hash   -1089551968
     * @symbol  ?_tryPushToComposter\@Hopper\@\@IEAA_NAEAVBlockSource\@\@AEAVContainer\@\@VBlockPos\@\@H\@Z
     */
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int);
    /**
     * @hash   -1091373368
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