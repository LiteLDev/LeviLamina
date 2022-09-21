/**
 * @file  MC/Hopper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1677938038
     * @symbol ??0Hopper@@QEAA@H_N@Z
     */
    MCAPI Hopper(int, bool);
    /**
     * @hash   125495286
     * @symbol ?getCooldownTime@Hopper@@QEBAHXZ
     */
    MCAPI int getCooldownTime() const;
    /**
     * @hash   -586286834
     * @symbol ?isOnCooldown@Hopper@@QEBA_NXZ
     */
    MCAPI bool isOnCooldown() const;
    /**
     * @hash   -1247215032
     * @symbol ?setCooldownTime@Hopper@@QEAAXH@Z
     */
    MCAPI void setCooldownTime(int);

//protected:
    /**
     * @hash   -337404334
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z
     */
    MCAPI bool _addItem(class BlockSource &, class Container &, class ItemStack &, int, int);
    /**
     * @hash   1449191421
     * @symbol ?_addItem@Hopper@@IEAA_NAEAVContainer@@AEAVItemActor@@@Z
     */
    MCAPI bool _addItem(class Container &, class ItemActor &);
    /**
     * @hash   -945022053
     * @symbol ?_getAttachedContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@H@Z
     */
    MCAPI class Container * _getAttachedContainerInBlock(class BlockSource &, class Vec3 const &, int);
    /**
     * @hash   1866279612
     * @symbol ?_getAttachedContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@H@Z
     */
    MCAPI std::vector<class Container *> _getAttachedContainers(class BlockSource &, class Vec3 const &, int);
    /**
     * @hash   248111536
     * @symbol ?_getContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
     */
    MCAPI class Container * _getContainerInBlock(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -20920766
     * @symbol ?_getContainersAt@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     */
    MCAPI std::vector<class Container *> _getContainersAt(class BlockSource &, class Vec3 const &);
    /**
     * @hash   588580174
     * @symbol ?_getItemAt@Hopper@@IEAAPEAVItemActor@@AEAVBlockSource@@AEBVVec3@@@Z
     */
    MCAPI class ItemActor * _getItemAt(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -1546328534
     * @symbol ?_getSourceContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
     */
    MCAPI std::vector<class Container *> _getSourceContainers(class BlockSource &, class Vec3 const &);
    /**
     * @hash   -193590694
     * @symbol ?_isEmptyContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
     */
    MCAPI bool _isEmptyContainer(class Container &, int);
    /**
     * @hash   -516120042
     * @symbol ?_isFullContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@H@Z
     */
    MCAPI bool _isFullContainer(class BlockSource &, class Container &, int);
    /**
     * @hash   -70670976
     * @symbol ?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z
     */
    MCAPI bool _pushOutItems(class BlockSource &, class Container &, class Vec3 const &, int);
    /**
     * @hash   -1254311828
     * @symbol ?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z
     */
    MCAPI bool _tryMoveItems(class BlockSource &, class Container &, class Vec3 const &, int, bool);
    /**
     * @hash   -1447870078
     * @symbol ?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
     */
    MCAPI bool _tryPullInItemsFromAboveContainer(class BlockSource &, class Container &, class Vec3 const &);
    /**
     * @hash   -451401840
     * @symbol ?_tryPushToComposter@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@VBlockPos@@H@Z
     */
    MCAPI bool _tryPushToComposter(class BlockSource &, class Container &, class BlockPos, int);
    /**
     * @hash   -453253992
     * @symbol ?_tryTakeInItemFromSlot@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@1HH@Z
     */
    MCAPI bool _tryTakeInItemFromSlot(class BlockSource &, class Container &, class Container &, int, int);

protected:

};