#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/alchemy/Potion.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class OminousBottleItem : public ::Item {
public:
    // prevent constructor by default
    OminousBottleItem& operator=(OminousBottleItem const&);
    OminousBottleItem(OminousBottleItem const&);
    OminousBottleItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OminousBottleItem@@UEAA@XZ
    virtual ~OminousBottleItem() = default;

    // vIndex: 44, symbol: ?isDestructive@OminousBottleItem@@UEBA_NH@Z
    virtual bool isDestructive(int) const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@OminousBottleItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 56, symbol: ?isValidAuxValue@OminousBottleItem@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 59, symbol: ?uniqueAuxValues@OminousBottleItem@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 72, symbol: ?use@OminousBottleItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 75, symbol:
    // ?useTimeDepleted@OminousBottleItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const;

    // vIndex: 83, symbol:
    // ?buildDescriptionId@OminousBottleItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 84, symbol:
    // ?buildEffectDescriptionName@OminousBottleItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 104, symbol: ?getIconInfo@OminousBottleItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 119, symbol: ?getPotionType@OminousBottleItem@@UEBA?AW4PotionType@Potion@@XZ
    virtual ::Potion::PotionType getPotionType() const;

    // symbol: ??0OminousBottleItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI OminousBottleItem(std::string const&, int);

    // symbol: ?getAppliedMobEffect@OminousBottleItem@@SA?AVMobEffectInstance@@H@Z
    MCAPI static class MobEffectInstance getAppliedMobEffect(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MAX_AMPLIFIER@OminousBottleItem@@0HB
    MCAPI static int const MAX_AMPLIFIER;

    // NOLINTEND
};
