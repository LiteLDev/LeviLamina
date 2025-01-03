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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 110
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const*, bool const) const /*override*/;

    // vIndex: 0
    virtual ~ClockItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClockItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
