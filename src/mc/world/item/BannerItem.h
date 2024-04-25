#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
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

class BannerItem : public ::Item {
public:
    // prevent constructor by default
    BannerItem& operator=(BannerItem const&);
    BannerItem(BannerItem const&);
    BannerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BannerItem@@UEAA@XZ
    virtual ~BannerItem() = default;

    // vIndex: 42, symbol: ?isWearableThroughLootTable@BannerItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool isWearableThroughLootTable(class CompoundTag const* userData) const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@BannerItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 56, symbol: ?isValidAuxValue@BannerItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@BannerItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 91, symbol: ?fixupCommon@BannerItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase&) const;

    // vIndex: 118, symbol:
    // ?_useOn@BannerItem@@UEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& actor, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0BannerItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI BannerItem(std::string const& name, int id);

    // symbol:
    // ?getPatternAndColorPairsFromItemStack@BannerItem@@SA?AV?$vector@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@V?$allocator@U?$pair@V?$not_null@PEBVBannerPattern@@@gsl@@W4ItemColor@@@std@@@2@@std@@AEBVItemStackBase@@@Z
    MCAPI static std::vector<std::pair<gsl::not_null<class BannerPattern const*>, ::ItemColor>>
    getPatternAndColorPairsFromItemStack(class ItemStackBase const& item);

    // NOLINTEND
};
