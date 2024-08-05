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
    // vIndex: 0
    virtual ~HumanoidArmorItem() = default;

    // vIndex: 9
    virtual bool isHumanoidArmor() const;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 21
    virtual bool isTrimAllowed() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const;

    // vIndex: 49
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 53
    virtual int getToughnessValue() const;

    // vIndex: 57
    virtual int getDamageChance(int) const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 70
    virtual int buildIdAux(short, class CompoundTag const*) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack&, class Player&) const;

    // vIndex: 74
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 119
    virtual float getArmorKnockbackResistance() const;

    MCAPI
    HumanoidArmorItem(std::string const&, short, class HumanoidArmorItem::ArmorMaterial const&, int, ::ArmorSlot, bool);

    MCAPI static bool isDamageable(class ItemDescriptor const&);

    MCAPI static class HumanoidArmorItem::ArmorMaterial const CHAIN;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const DIAMOND;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const ELYTRA;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const GOLD;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const IRON;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const LEATHER;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const NETHERITE;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const TURTLE;

    MCAPI static int const mHealthPerSlot[];

    // NOLINTEND
};
