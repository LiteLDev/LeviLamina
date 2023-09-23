#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/BucketFillType.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/enums/UseAnimation.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BucketItem : public ::Item {
public:
    // prevent constructor by default
    BucketItem& operator=(BucketItem const&);
    BucketItem(BucketItem const&);
    BucketItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 56, symbol: ?isDestructive@BucketItem@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 57, symbol: ?isLiquidClipItem@BucketItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?isValidAuxValue@BucketItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 83, symbol: ?canUseOnSimTick@BucketItem@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 84, symbol: ?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@BucketItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 86, symbol: ?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 87, symbol: ?releaseUsing@BucketItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack&, class Player*, int) const;

    // vIndex: 95, symbol:
    // ?buildDescriptionId@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 100, symbol: ?getMaxStackSize@BucketItem@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 111, symbol: ?validFishInteraction@BucketItem@@UEBA_NH@Z
    virtual bool validFishInteraction(int) const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 119, symbol:
    // ?setIconInfo@BucketItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 124, symbol: ?getLightEmission@BucketItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 131, symbol:
    // ?getAuxValuesDescription@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 135, symbol:
    // ?_useOn@BucketItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ?isBucket@BucketItem@@UEBA_NXZ
    MCVAPI bool isBucket() const;

    // symbol: ?uniqueAuxValues@BucketItem@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol:
    // ??0BucketItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BucketFillType@@@Z
    MCAPI BucketItem(std::string const&, int, ::BucketFillType);

    // symbol: ?DRINK_DURATION@BucketItem@@2HB
    MCAPI static int const DRINK_DURATION;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?addBucketEntitySaveData@BucketItem@@IEBAXAEAVActor@@AEAVItemStack@@@Z
    MCAPI void addBucketEntitySaveData(class Actor&, class ItemStack&) const;

    // symbol: ?readBucketEntitySaveData@BucketItem@@IEBA_NAEAVBlockSource@@PEAVActor@@VBlockPos@@AEBVItemInstance@@@Z
    MCAPI bool
    readBucketEntitySaveData(class BlockSource&, class Actor*, class BlockPos, class ItemInstance const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canEmptyBucketIntoBlock@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@2@Z
    MCAPI bool
    _canEmptyBucketIntoBlock(class BlockSource&, class BlockPos const&, class Block const&, class Block const&) const;

    // symbol: ?_emptyBucket@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@PEAVActor@@AEBVItemStack@@E@Z
    MCAPI bool _emptyBucket(
        class BlockSource&,
        class Block const&,
        class BlockPos const&,
        class Actor*,
        class ItemStack const&,
        uchar
    ) const;

    // symbol: ?_removeBubbleColumn@BucketItem@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _removeBubbleColumn(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takeLiquid(class ItemStack&, class Actor&, class BlockPos const&) const;

    // symbol: ?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takePowderSnow(class ItemStack&, class Actor&, class BlockPos const&) const;

    // symbol: ?_tryGetBlock@BucketItem@@AEBAPEBVBlockLegacy@@W4BucketFillType@@@Z
    MCAPI class BlockLegacy const* _tryGetBlock(::BucketFillType) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mFillTypeToEntityType@BucketItem@@0V?$vector@U?$pair@W4BucketFillType@@W4ActorType@@@std@@V?$allocator@U?$pair@W4BucketFillType@@W4ActorType@@@std@@@2@@std@@B
    MCAPI static std::vector<std::pair<::BucketFillType, ::ActorType>> const mFillTypeToEntityType;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mFillTypeToEntityType() { return mFillTypeToEntityType; }

    // NOLINTEND
};
