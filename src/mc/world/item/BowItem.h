#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/RangedWeaponItem.h"
#include "mc/world/item/ResolvedItemIconInfo.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
class ItemStackBase;
// clang-format on

class BowItem : public ::RangedWeaponItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::ResolvedItemIconInfo[3]> mFrame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const /*override*/;

    virtual ~BowItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCFOLD ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCFOLD int $getEnchantSlot() const;

    MCAPI void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
