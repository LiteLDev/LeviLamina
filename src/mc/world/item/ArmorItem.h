#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/ArmorSlot.h"
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

class ArmorItem : public ::Item {
public:
    // ArmorItem inner types declare
    // clang-format off
    class ArmorMaterial;
    // clang-format on

    // ArmorItem inner types define
    class ArmorMaterial {
    public:
        // prevent constructor by default
        ArmorMaterial& operator=(ArmorMaterial const&);
        ArmorMaterial(ArmorMaterial const&);
        ArmorMaterial();
    };

public:
    // prevent constructor by default
    ArmorItem& operator=(ArmorItem const&);
    ArmorItem(ArmorItem const&);
    ArmorItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: ?isArmor@ArmorItem@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 18, symbol: ?isDyeable@ArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 60, symbol:
    // ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 61, symbol: ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 62, symbol: ?getEnchantSlot@ArmorItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 63, symbol: ?getEnchantValue@ArmorItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 64, symbol: ?getArmorValue@ArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 65, symbol: ?getToughnessValue@ArmorItem@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 68, symbol: ?getDamageChance@ArmorItem@@UEBAHH@Z
    virtual int getDamageChance(int) const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 73, symbol: ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 74, symbol: ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 75, symbol: __unk_vfn_75
    virtual void __unk_vfn_75();

    // vIndex: 76, symbol: ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 78, symbol: ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 79, symbol: __unk_vfn_79
    virtual void __unk_vfn_79();

    // vIndex: 80, symbol: __unk_vfn_80
    virtual void __unk_vfn_80();

    // vIndex: 82, symbol: ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short, class CompoundTag const*) const;

    // vIndex: 84, symbol: ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 85, symbol: ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 89, symbol: ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 93, symbol: ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 113, symbol: ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 114, symbol: ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
    virtual ::LevelSoundEvent getEquipSound() const;

    // vIndex: 115, symbol: __unk_vfn_115
    virtual void __unk_vfn_115();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 120, symbol: ?getIconInfo@ArmorItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 136, symbol: ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
    virtual float getArmorKnockbackResistance() const;

    // symbol:
    // ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@_N@Z
    MCAPI ArmorItem(std::string const&, int, class ArmorItem::ArmorMaterial const&, int, ::ArmorSlot, bool);

    // symbol: ?isTrimAllowed@ArmorItem@@QEBA_NXZ
    MCAPI bool isTrimAllowed() const;

    // symbol: ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
    MCAPI static bool dispenseArmor(class BlockSource&, class Container&, int, class Vec3 const&, uchar, ::ArmorSlot);

    // symbol: ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
    MCAPI static ::ArmorSlot getSlotForItem(class ItemStackBase const&);

    // symbol: ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isDamageable(class ItemDescriptor const&);

    // symbol: ?CHAIN@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const CHAIN;

    // symbol: ?DIAMOND@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;

    // symbol: ?ELYTRA@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;

    // symbol: ?GOLD@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const GOLD;

    // symbol: ?IRON@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const IRON;

    // symbol: ?LEATHER@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const LEATHER;

    // symbol: ?NETHERITE@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;

    // symbol: ?TURTLE@ArmorItem@@2VArmorMaterial@1@B
    MCAPI static class ArmorItem::ArmorMaterial const TURTLE;

    // symbol: ?mHealthPerSlot@ArmorItem@@2QBHB
    MCAPI static int const mHealthPerSlot[];

    // NOLINTEND
};
