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
    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index) /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 100
    virtual void enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const /*override*/;

    // vIndex: 0
    virtual ~BowItem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Item& $setIconInfo(::std::string const& name, int index);

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI void $enchantProjectile(::ItemStackBase const& weapon, ::Actor& projectile) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
