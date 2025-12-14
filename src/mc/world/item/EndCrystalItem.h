#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class EndCrystalItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    virtual bool isDestructive(int auxValue) const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ~EndCrystalItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCFOLD bool $isDestructive(int auxValue) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
