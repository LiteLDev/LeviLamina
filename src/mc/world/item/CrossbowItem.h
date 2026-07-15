#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
// clang-format on

class CrossbowItem : public ::RangedWeaponItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::ResolvedItemIconInfo[5]> mFrame;
    ::ll::TypedStorage<4, 4, int const>                   mMaxDurability;
    ::ll::TypedStorage<4, 4, int const>                   mMaxMultiShots;
    ::ll::TypedStorage<4, 4, float const>                 mMultishotAngleDelta;
    ::ll::TypedStorage<4, 4, float const>                 mDefaultArrowPower;
    // NOLINTEND

public:
    // prevent constructor by default
    CrossbowItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const
        /*override*/;

    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual bool canBeCharged() const /*override*/;

    virtual int getMaxUseDuration(::ItemStack const*) const /*override*/;

    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CrossbowItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
