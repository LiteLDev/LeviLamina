#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class WaterLilyBlockItem : public ::BlockItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 122
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 120
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 48
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 0
    virtual ~WaterLilyBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCFOLD bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar& face, ::BlockPos& pos) const;

    MCFOLD bool $isLiquidClipItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
