#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompassSpriteCalculator;
class ItemStack;
class ItemStackBase;
class Mob;
struct ResolvedItemIconInfo;
// clang-format on

class AbstractCompassItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdf1719;
    ::ll::UntypedStorage<4, 4> mUnka58e97;
    ::ll::UntypedStorage<8, 8> mUnkc7d485;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractCompassItem& operator=(AbstractCompassItem const&);
    AbstractCompassItem(AbstractCompassItem const&);
    AbstractCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 110
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 0
    virtual ~AbstractCompassItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AbstractCompassItem(::std::string const& name, int id, ::CompassSpriteCalculator (*getSpriteCalculator)(::Mob&));
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::CompassSpriteCalculator (*getSpriteCalculator)(::Mob&));
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const;

    MCAPI int $getEnchantSlot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
