#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
class Player;
// clang-format on

class RangedWeaponItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const
        /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    virtual ~RangedWeaponItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;


    // NOLINTEND
};
