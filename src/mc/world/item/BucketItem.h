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

    // vIndex: 11, symbol: ?isBucket@BucketItem@@UEBA_NXZ
    virtual bool isBucket() const;

    // vIndex: 44, symbol: ?isDestructive@BucketItem@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 45, symbol: ?isLiquidClipItem@BucketItem@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 56, symbol: ?isValidAuxValue@BucketItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 59, symbol: ?uniqueAuxValues@BucketItem@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 71, symbol: ?canUseOnSimTick@BucketItem@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 72, symbol: ?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@BucketItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 74, symbol: ?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 75, symbol: ?releaseUsing@BucketItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& inoutInstance, class Player* player, int durationLeft) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 86, symbol: ?getMaxStackSize@BucketItem@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const&) const;

    // vIndex: 95, symbol: ?validFishInteraction@BucketItem@@UEBA_NH@Z
    virtual bool validFishInteraction(int auxValue) const;

    // vIndex: 103, symbol:
    // ?setIconInfo@BucketItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int id);

    // vIndex: 108, symbol: ?getLightEmission@BucketItem@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int auxValue) const;

    // vIndex: 113, symbol:
    // ?getAuxValuesDescription@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 118, symbol:
    // ?_useOn@BucketItem@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol:
    // ??0BucketItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BucketFillType@@@Z
    MCAPI BucketItem(std::string const& name, int id, ::BucketFillType type);

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
    MCAPI bool _canEmptyBucketIntoBlock(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        class Block const&    extraBlock
    ) const;

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
    MCAPI void _removeBubbleColumn(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takeLiquid(class ItemStack& item, class Actor& entity, class BlockPos const& pos) const;

    // symbol: ?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
    MCAPI bool _takePowderSnow(class ItemStack& item, class Actor& actor, class BlockPos const& pos) const;

    // symbol: ?_tryGetBlock@BucketItem@@AEBAPEBVBlockLegacy@@W4BucketFillType@@@Z
    MCAPI class BlockLegacy const* _tryGetBlock(::BucketFillType contents) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mFillTypeToEntityType@BucketItem@@0V?$vector@U?$pair@W4BucketFillType@@W4ActorType@@@std@@V?$allocator@U?$pair@W4BucketFillType@@W4ActorType@@@std@@@2@@std@@B
    MCAPI static std::vector<std::pair<::BucketFillType, ::ActorType>> const mFillTypeToEntityType;

    // NOLINTEND
};
