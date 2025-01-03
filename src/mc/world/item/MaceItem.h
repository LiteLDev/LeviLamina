#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/WeaponItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class ItemStack;
class ItemStackBase;
class Mob;
// clang-format on

class MaceItem : public ::WeaponItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 53
    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 37
    virtual float getAttackDamageBonus(::Actor const& attacker, float) const /*override*/;

    // vIndex: 81
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    // vIndex: 0
    virtual ~MaceItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MaceItem(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI float $getAttackDamageBonus(::Actor const& attacker, float) const;

    MCAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
