#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class Vec3;
// clang-format on

class CompassItem : public ::AbstractCompassItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ~CompassItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
