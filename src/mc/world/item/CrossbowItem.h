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
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int id) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 110
    virtual int
    getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const
        /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 114
    virtual void playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 113
    virtual bool canBeCharged() const /*override*/;

    // vIndex: 5
    virtual int getMaxUseDuration(::ItemStack const* instance) const /*override*/;

    // vIndex: 100
    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const /*override*/;

    // vIndex: 0
    virtual ~CrossbowItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 _getShootDir(::Player const& player, float angleOffset) const;

    MCAPI void
    _shootArrow(::ItemInstance const& crossbow, ::ItemInstance const& projectileInstance, ::Player& player) const;

    MCAPI void _shootFirework(::ItemInstance const& projectileInstance, ::Player& player) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Item& $setIconInfo(::std::string const& name, int id);

    MCFOLD ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI int
    $getAnimationFrameFor(::Mob* holder, bool asItemEntity, ::ItemStack const* item, bool shouldAnimate) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI void $playSoundIncrementally(::ItemStack const& item, ::Mob& mob) const;

    MCAPI int $getEnchantSlot() const;

    MCFOLD bool $canBeCharged() const;

    MCAPI int $getMaxUseDuration(::ItemStack const* instance) const;

    MCAPI void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
