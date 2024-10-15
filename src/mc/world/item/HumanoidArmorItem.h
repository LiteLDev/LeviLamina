#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 52
    virtual int getArmorValue() const;

    // vIndex: 53
    virtual int getToughnessValue() const;

    // vIndex: 57
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const&) const;

    // vIndex: 64
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65
    virtual void clearColor(class ItemStackBase& instance) const;

    // vIndex: 66
    virtual void setColor(class ItemStackBase& item, class mce::Color const& color) const;

    // vIndex: 70
    virtual int buildIdAux(short auxValue, class CompoundTag const* userData) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 97
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo
    getIconInfo(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    // vIndex: 119
    virtual float getArmorKnockbackResistance() const;

    MCAPI HumanoidArmorItem(
        std::string const&                            name,
        short                                         id,
        class HumanoidArmorItem::ArmorMaterial const& armorType,
        int                                           icon,
        ::ArmorSlot                                   slot,
        bool                                          currentVersionAllowsTrim
    );

    MCAPI static bool isDamageable(class ItemDescriptor const& item);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        std::string const&                            name,
        short                                         id,
        class HumanoidArmorItem::ArmorMaterial const& armorType,
        int                                           icon,
        ::ArmorSlot                                   slot,
        bool                                          currentVersionAllowsTrim
    );

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI int buildIdAux$(short auxValue, class CompoundTag const* userData) const;

    MCAPI void clearColor$(class ItemStackBase& instance) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI float getArmorKnockbackResistance$() const;

    MCAPI int getArmorValue$() const;

    MCAPI class mce::Color getColor$(class CompoundTag const* userData, class ItemDescriptor const&) const;

    MCAPI int getDamageChance$(int unbreaking) const;

    MCAPI int getEnchantSlot$() const;

    MCAPI int getEnchantValue$() const;

    MCAPI ::ActorLocation getEquipLocation$() const;

    MCAPI ::Puv::Legacy::LevelSoundEvent getEquipSound$() const;

    MCAPI struct ResolvedItemIconInfo
    getIconInfo$(class ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI int getToughnessValue$() const;

    MCAPI bool hasCustomColor$(class CompoundTag const* userData) const;

    MCAPI void hurtActor$(class ItemStack&, class Actor&, class Mob&) const;

    MCAPI bool isDyeable$() const;

    MCAPI bool isHumanoidArmor$() const;

    MCAPI bool isTrimAllowed$() const;

    MCAPI bool isValidRepairItem$(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI void setColor$(class ItemStackBase& item, class mce::Color const& color) const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& CHAIN();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& DIAMOND();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& ELYTRA();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& GOLD();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& IRON();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& LEATHER();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& NETHERITE();

    MCAPI static class HumanoidArmorItem::ArmorMaterial const& TURTLE();

    MCAPI static ::ll::CArrayT<int const>& mHealthPerSlot();

    // NOLINTEND
};
