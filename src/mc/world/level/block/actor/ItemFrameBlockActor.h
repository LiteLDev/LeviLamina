#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/states/BlockStateVariant.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ItemFrameBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ItemFrameBlockActor& operator=(ItemFrameBlockActor const&) = delete;
    ItemFrameBlockActor(ItemFrameBlockActor const&)            = delete;
    ItemFrameBlockActor()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?load@ItemFrameBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@ItemFrameBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 8, symbol: ?onChanged@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource&);

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?onRemoved@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource&);

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: ?getShadowRadius@ItemFrameBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource&) const;

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@ItemFrameBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@ItemFrameBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??1ItemFrameBlockActor@@UEAA@XZ
    MCVAPI ~ItemFrameBlockActor();

    // symbol: ??0ItemFrameBlockActor@@QEAA@VBlockPos@@@Z
    MCAPI ItemFrameBlockActor(class BlockPos);

    // symbol:
    // ??0ItemFrameBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ItemFrameBlockActor(class BlockPos, ::BlockActorType, std::string const&);

    // symbol: ?actuallyDropItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_NPEAVActor@@@Z
    MCAPI void actuallyDropItem(class BlockSource&, bool, class Actor*);

    // symbol: ?dropFramedItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@_NPEAVActor@@@Z
    MCAPI void dropFramedItem(class BlockSource&, bool, class Actor*);

    // symbol: ?getFramedItem@ItemFrameBlockActor@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getFramedItem() const;

    // symbol: ?getRotation@ItemFrameBlockActor@@QEAAMXZ
    MCAPI float getRotation();

    // symbol: ?rotateFramedItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@AEAVActor@@@Z
    MCAPI void rotateFramedItem(class BlockSource&, class Actor&);

    // symbol: ?setItem@ItemFrameBlockActor@@QEAAXAEAVBlockSource@@AEBVItemInstance@@PEAVActor@@@Z
    MCAPI void setItem(class BlockSource&, class ItemInstance const&, class Actor*);

    // symbol: ?updateNameTag@ItemFrameBlockActor@@QEAAXXZ
    MCAPI void updateNameTag();

    // symbol: ?ROTATION_DEGREES@ItemFrameBlockActor@@2MB
    MCAPI static float const ROTATION_DEGREES;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkMapRemoval@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEAVItemInstance@@@Z
    MCAPI void _checkMapRemoval(class BlockSource&, class ItemInstance&);

    // symbol: ?_updateBit@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEBV?$BlockStateVariant@_N@@AEBVHashedString@@@Z
    MCAPI void _updateBit(class BlockSource&, class BlockStateVariant<bool> const&, class HashedString const&);

    // NOLINTEND
};
