#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/states/BlockStateVariant.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ItemFrameBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    ItemFrameBlockActor& operator=(ItemFrameBlockActor const&);
    ItemFrameBlockActor(ItemFrameBlockActor const&);
    ItemFrameBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemFrameBlockActor@@UEAA@XZ
    virtual ~ItemFrameBlockActor();

    // vIndex: 1, symbol: ?load@ItemFrameBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@ItemFrameBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 8, symbol: ?onChanged@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onChanged(class BlockSource& region);

    // vIndex: 13, symbol: ?onRemoved@ItemFrameBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void onRemoved(class BlockSource& region);

    // vIndex: 19, symbol: ?getShadowRadius@ItemFrameBlockActor@@UEBAMAEAVBlockSource@@@Z
    virtual float getShadowRadius(class BlockSource& region) const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@ItemFrameBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41, symbol: ?_onUpdatePacket@ItemFrameBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ??0ItemFrameBlockActor@@QEAA@VBlockPos@@@Z
    MCAPI explicit ItemFrameBlockActor(class BlockPos pos);

    // symbol:
    // ??0ItemFrameBlockActor@@QEAA@VBlockPos@@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ItemFrameBlockActor(class BlockPos pos, ::BlockActorType type, std::string const& id);

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

    // symbol: ?setIgnoreLighting@ItemFrameBlockActor@@QEAAX_N@Z
    MCAPI void setIgnoreLighting(bool ignoreLighting);

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
    MCAPI void _checkMapRemoval(class BlockSource& region, class ItemInstance& item);

    // symbol: ?_updateBit@ItemFrameBlockActor@@AEAAXAEAVBlockSource@@AEBV?$BlockStateVariant@_N@@AEBVHashedString@@@Z
    MCAPI void
    _updateBit(class BlockSource& region, class BlockStateVariant<bool> const&, class HashedString const& itemName);

    // NOLINTEND
};
