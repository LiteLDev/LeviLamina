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
    // prevent constructor by default
    RangedWeaponItem& operator=(RangedWeaponItem const&);
    RangedWeaponItem(RangedWeaponItem const&);
    RangedWeaponItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 110
    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const
        /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 0
    virtual ~RangedWeaponItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RangedWeaponItem(::std::string const& name, short id);

    MCAPI float getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, short id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;

    MCAPI int $getEnchantValue() const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
