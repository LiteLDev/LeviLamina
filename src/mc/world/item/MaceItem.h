#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    virtual int getEnchantSlot() const /*override*/;

    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual float getAttackDamageBonus(::Actor const& attacker) const /*override*/;

    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    virtual ~MaceItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI float $getAttackDamageBonus(::Actor const& attacker) const;

    MCFOLD float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
