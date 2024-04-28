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
    // vIndex: 0, symbol: __gen_??1ArmorItem@@UEAA@XZ
    virtual ~ArmorItem() = default;

    // vIndex: 9, symbol: ?isArmor@ArmorItem@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 14, symbol: ?isDyeable@ArmorItem@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 21, symbol: ?isTrimAllowed@ArmorItem@@UEBA_NXZ
    virtual bool isTrimAllowed() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49, symbol: ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@ArmorItem@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@ArmorItem@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: ?getArmorValue@ArmorItem@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 53, symbol: ?getToughnessValue@ArmorItem@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 57, symbol: ?getDamageChance@ArmorItem@@UEBAHH@Z
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 62, symbol: ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 64, symbol: ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65, symbol: ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase& instance) const;

    // vIndex: 66, symbol: ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase& item, class mce::Color const& color) const;

    // vIndex: 70, symbol: ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short auxValue, class CompoundTag const* userData) const;

    // vIndex: 72, symbol: ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 77, symbol: ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 80, symbol: ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const;

    // vIndex: 97, symbol: ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98, symbol: ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 104, symbol: ?getIconInfo@ArmorItem@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const& item, int, bool inInventoryPane) const;

    // vIndex: 119, symbol: ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
    virtual float getArmorKnockbackResistance() const;

    // symbol:
    // ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@_N@Z
    MCAPI ArmorItem(
        std::string const&                    name,
        int                                   id,
        class ArmorItem::ArmorMaterial const& armorType,
        int                                   icon,
        ::ArmorSlot                           slot,
        bool
    );

    // symbol: ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
    MCAPI static bool dispenseArmor(
        class BlockSource& region,
        class Container&   container,
        int                slot,
        class Vec3 const&  pos,
        uchar,
        ::ArmorSlot armorSlot
    );

    // symbol: ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
    MCAPI static ::ArmorSlot getSlotForItem(class ItemStackBase const& item);

    // symbol: ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isDamageable(class ItemDescriptor const& item);

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
