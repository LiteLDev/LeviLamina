#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
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

class WeaponItem : public ::Item {
public:
    // prevent constructor by default
    WeaponItem& operator=(WeaponItem const&);
    WeaponItem(WeaponItem const&);
    WeaponItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeaponItem();

    // vIndex: 31
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 35
    virtual int getAttackDamage() const;

    // vIndex: 37
    virtual bool isHandEquipped() const;

    // vIndex: 43
    virtual bool canDestroyInCreative() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49
    virtual bool isValidRepairItem(
        class ItemStackBase const&,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 77
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 78
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    MCAPI WeaponItem(std::string const& name, int id, class Item::Tier const& tier);

    MCAPI void setAttackDamage(int damage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI bool canDestroyInCreative$() const;

    MCAPI bool canDestroySpecial$(class Block const& block) const;

    MCAPI int getAttackDamage$() const;

    MCAPI float getDestroySpeed$(class ItemStackBase const& item, class Block const& block) const;

    MCAPI int getEnchantSlot$() const;

    MCAPI int getEnchantValue$() const;

    MCAPI void hurtActor$(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    MCAPI bool isHandEquipped$() const;

    MCAPI bool isValidRepairItem$(
        class ItemStackBase const&,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    // NOLINTEND
};
