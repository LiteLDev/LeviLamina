#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Hopper {
public:
    int  mCooldownTime;                // this+0x0
    bool mTransferedFromChestMinecart; // this+0x4
    bool mIsEntity;                    // this+0x5
    int  mMoveItemSpeed;               // this+0x8
public:
    // NOLINTBEGIN
    // symbol: ??0Hopper@@QEAA@H_N@Z
    MCAPI Hopper(int moveItemSpeed, bool isEntity);

    // symbol: ?getCooldownTime@Hopper@@QEBAHXZ
    MCAPI int getCooldownTime() const;

    // symbol: ?isOnCooldown@Hopper@@QEBA_NXZ
    MCAPI bool isOnCooldown() const;

    // symbol: ?setCooldownTime@Hopper@@QEAAXH@Z
    MCAPI void setCooldownTime(int time);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addItem@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEAVItemStack@@HH@Z
    MCAPI bool
    _addItem(class BlockSource& region, class Container& container, class ItemStack& item, int face, int itemCount);

    // symbol: ?_getAttachedContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI class Container*
    _getAttachedContainerInBlock(class BlockSource& region, class Vec3 const& pos, int attachedFace);

    // symbol:
    // ?_getAttachedContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@H@Z
    MCAPI std::vector<class Container*>
          _getAttachedContainers(class BlockSource& region, class Vec3 const& pos, int attachedFace);

    // symbol: ?_getContainerInBlock@Hopper@@IEAAPEAVContainer@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI class Container* _getContainerInBlock(class BlockSource& region, class Vec3 const& pos);

    // symbol:
    // ?_getContainersAt@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI std::vector<class Container*> _getContainersAt(class BlockSource& region, class Vec3 const& pos);

    // symbol:
    // ?_getSourceContainers@Hopper@@IEAA?AV?$vector@PEAVContainer@@V?$allocator@PEAVContainer@@@std@@@std@@AEAVBlockSource@@AEBVVec3@@@Z
    MCAPI std::vector<class Container*> _getSourceContainers(class BlockSource& region, class Vec3 const& pos);

    // symbol: ?_isEmptyContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
    MCAPI bool _isEmptyContainer(class Container& container, int face);

    // symbol: ?_isFullContainer@Hopper@@IEAA_NAEAVContainer@@H@Z
    MCAPI bool _isFullContainer(class Container& container, int);

    // symbol: ?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z
    MCAPI bool _pushOutItems(
        class BlockSource& region,
        class Container&   fromContainer,
        class Vec3 const&  position,
        int                attachedFace
    );

    // symbol: ?_tryMoveItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H_N@Z
    MCAPI bool _tryMoveItems(
        class BlockSource& region,
        class Container&   fromContainer,
        class Vec3 const&  pos,
        int                attachedFace,
        bool               canPushItems
    );

    // symbol: ?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
    MCAPI bool
    _tryPullInItemsFromAboveContainer(class BlockSource& region, class Container& toContainer, class Vec3 const& pos);

    // symbol: ?_tryPushToComposter@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@VBlockPos@@H@Z
    MCAPI bool _tryPushToComposter(
        class BlockSource& region,
        class Container&   fromContainer,
        class BlockPos     hopperPos,
        int                facingDirection
    );

    // symbol: ?_tryTakeInItemFromSlot@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@1HH@Z
    MCAPI bool _tryTakeInItemFromSlot(
        class BlockSource& region,
        class Container&   toContainer,
        class Container&   fromContainer,
        int                slot,
        int                face
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryAddItemsFromPos@Hopper@@AEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z
    MCAPI bool _tryAddItemsFromPos(class BlockSource& region, class Container& toContainer, class Vec3 const& pos);

    // NOLINTEND
};
