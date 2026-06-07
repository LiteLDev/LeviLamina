#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackBase;
class Mob;
struct ResolvedItemIconInfo;
// clang-format on

class ClockItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mAtlasWidth;
    ::ll::TypedStorage<4, 4, int> mAtlasHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ClockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool const) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClockItem(::std::string const& name, int id);

#ifdef LL_PLAT_C
    MCFOLD void setTextureDimensions(ushort texSizeW, ushort texSizeH);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool const) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
