#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ComponentItem.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class WolfArmorItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WolfArmorItem& operator=(WolfArmorItem const&);
    WolfArmorItem(WolfArmorItem const&);
    WolfArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WolfArmorItem@@UEAA@XZ
    virtual ~WolfArmorItem() = default;

    // vIndex: 14, symbol: ?isDyeable@WolfArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@WolfArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 49, symbol: ?isValidRepairItem@WolfArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 52, symbol: ?getArmorValue@WolfArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 54, symbol: ?getBreakSound@WolfArmorItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 62, symbol: ?getColor@WolfArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 63, symbol: ?hasCustomColor@WolfArmorItem@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool hasCustomColor(class ItemStackBase const&) const;

    // vIndex: 64, symbol: ?hasCustomColor@WolfArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 65, symbol: ?clearColor@WolfArmorItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66, symbol: ?setColor@WolfArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@WolfArmorItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104, symbol: ?getIconInfo@WolfArmorItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@WolfArmorItem@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const;

    // symbol:
    // ??0WolfArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FAEAUReflectionCtx@cereal@@@Z
    MCAPI WolfArmorItem(std::string const&, short, struct cereal::ReflectionCtx&);

    // symbol:
    // ?ABSORBABLE_DAMAGE_CAUSES@WolfArmorItem@@2V?$vector@W4ActorDamageCause@@V?$allocator@W4ActorDamageCause@@@std@@@std@@B
    MCAPI static std::vector<::ActorDamageCause> const ABSORBABLE_DAMAGE_CAUSES;

    // symbol: ?CRACKS_THRESHOLDS@WolfArmorItem@@2V?$vector@HV?$allocator@H@std@@@std@@B
    MCAPI static std::vector<int> const CRACKS_THRESHOLDS;

    // NOLINTEND
};
