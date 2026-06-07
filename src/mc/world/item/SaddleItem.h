#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
class ItemStack;
class Vec3;
// clang-format on

class SaddleItem : public ::Item {
public:
    // prevent constructor by default
    SaddleItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SaddleItem(::std::string const& nameId, short id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _tryEquipSaddleViaComponents(::Actor& actor, ::ItemStack const& saddle);

    MCAPI static bool _tryEquipSaddleViaEvents(::Actor& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, short id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
