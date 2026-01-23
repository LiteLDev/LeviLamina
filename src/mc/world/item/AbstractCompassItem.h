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
    // AbstractCompassItem inner types define
    using GetSpriteCalculatorFunction = ::CompassSpriteCalculator& (*)(::Mob&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mAtlasWidth;
    ::ll::TypedStorage<4, 4, int>                                    mAtlasHeight;
    ::ll::TypedStorage<8, 8, ::CompassSpriteCalculator& (*)(::Mob&)> mGetSpriteCalculator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual ~AbstractCompassItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool) const;

    MCAPI int $getEnchantSlot() const;


    // NOLINTEND
};
