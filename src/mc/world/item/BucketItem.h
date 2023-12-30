#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/BucketFillType.h"
#include "mc/enums/InHandUpdateType.h"
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
    // vIndex: 0, symbol: __gen_??1BucketItem@@UEAA@XZ
    virtual ~BucketItem() = default;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: ?isDestructive@BucketItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 43, symbol: ?isLiquidClipItem@BucketItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isValidAuxValue@BucketItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 69, symbol: ?canUseOnSimTick@BucketItem@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 70, symbol: ?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& itemStack, class Player& player) const;

    // vIndex: 71, symbol: ?dispense@BucketItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 72, symbol: ?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 73, symbol: ?releaseUsing@BucketItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& inoutInstance, class Player* player, int durationLeft) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionId@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 85, symbol: ?getMaxStackSize@BucketItem@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const& item) const;

    // vIndex: 94, symbol: ?validFishInteraction@BucketItem@@UEBA_NH@Z
    virtual bool validFishInteraction(int auxValue) const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 102, symbol:
    // ?setIconInfo@BucketItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 107, symbol: ?getLightEmission@BucketItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 112, symbol:
    // ?getAuxValuesDescription@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 117, symbol:
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
    MCAPI void addBucketEntitySaveData(class Actor& entity, class ItemStack& instance) const;

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
        class BlockSource&     region,
        class Block const&     contents,
        class BlockPos const&  pos,
        class Actor*           placer,
        class ItemStack const& instance,
        uchar                  face
    ) const;

    // symbol: ?_removeBubbleColumn@BucketItem@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _removeBubbleColumn(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takeLiquid(class ItemStack& itemStack, class Actor& entity, class BlockPos const& pos) const;

    // symbol: ?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takePowderSnow(class ItemStack&, class Actor&, class BlockPos const&) const;

    // symbol: ?_tryGetBlock@BucketItem@@AEBAPEBVBlockLegacy@@W4BucketFillType@@@Z
    MCAPI class BlockLegacy const* _tryGetBlock(enum BucketFillType contents) const;

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
    static auto& $mFillTypeToEntityType() { return mFillTypeToEntityType; }

    // NOLINTEND
};
