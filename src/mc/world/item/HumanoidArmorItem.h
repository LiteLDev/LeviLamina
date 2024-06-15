#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/ArmorSlot.h"
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

class HumanoidArmorItem : public ::Item {
public:
    // HumanoidArmorItem inner types declare
    // clang-format off
    class ArmorMaterial;
    // clang-format on

    // HumanoidArmorItem inner types define
    class ArmorMaterial {
    public:
        // prevent constructor by default
        ArmorMaterial& operator=(ArmorMaterial const&);
        ArmorMaterial(ArmorMaterial const&);
        ArmorMaterial();
    };

public:
    // prevent constructor by default
    HumanoidArmorItem& operator=(HumanoidArmorItem const&);
    HumanoidArmorItem(HumanoidArmorItem const&);
    HumanoidArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HumanoidArmorItem@@UEAA@XZ
    virtual ~HumanoidArmorItem() = default;

    // vIndex: 9, symbol: ?isHumanoidArmor@HumanoidArmorItem@@UEBA_NXZ
    virtual bool isHumanoidArmor() const;

    // vIndex: 14, symbol: ?isDyeable@HumanoidArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: ?isTrimAllowed@HumanoidArmorItem@@UEBA_NXZ
    virtual bool isTrimAllowed() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@HumanoidArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 49, symbol: ?isValidRepairItem@HumanoidArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 50, symbol: ?getEnchantSlot@HumanoidArmorItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@HumanoidArmorItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: ?getArmorValue@HumanoidArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 53, symbol: ?getToughnessValue@HumanoidArmorItem@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 57, symbol: ?getDamageChance@HumanoidArmorItem@@UEBAHH@Z
    virtual int getDamageChance(int) const;

    // vIndex: 62, symbol: ?getColor@HumanoidArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 64, symbol: ?hasCustomColor@HumanoidArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 65, symbol: ?clearColor@HumanoidArmorItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66, symbol: ?setColor@HumanoidArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 70, symbol: ?buildIdAux@HumanoidArmorItem@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short, class CompoundTag const*) const;

    // vIndex: 72, symbol: ?use@HumanoidArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 74, symbol: ?dispense@HumanoidArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 78, symbol: ?hurtActor@HumanoidArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 97, symbol: ?getEquipLocation@HumanoidArmorItem@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98, symbol: ?getEquipSound@HumanoidArmorItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 104, symbol: ?getIconInfo@HumanoidArmorItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 119, symbol: ?getArmorKnockbackResistance@HumanoidArmorItem@@UEBAMXZ
    virtual float getArmorKnockbackResistance() const;

    // symbol:
    // ??0HumanoidArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FAEBVArmorMaterial@0@HW4ArmorSlot@@_N@Z
    MCAPI
    HumanoidArmorItem(std::string const&, short, class HumanoidArmorItem::ArmorMaterial const&, int, ::ArmorSlot, bool);

    // symbol: ?isDamageable@HumanoidArmorItem@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isDamageable(class ItemDescriptor const&);

    // symbol: ?CHAIN@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const CHAIN;

    // symbol: ?DIAMOND@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const DIAMOND;

    // symbol: ?ELYTRA@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const ELYTRA;

    // symbol: ?GOLD@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const GOLD;

    // symbol: ?IRON@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const IRON;

    // symbol: ?LEATHER@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const LEATHER;

    // symbol: ?NETHERITE@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const NETHERITE;

    // symbol: ?TURTLE@HumanoidArmorItem@@2VArmorMaterial@1@B
    MCAPI static class HumanoidArmorItem::ArmorMaterial const TURTLE;

    // symbol: ?mHealthPerSlot@HumanoidArmorItem@@2QBHB
    MCAPI static int const mHealthPerSlot[];

    // NOLINTEND
};
