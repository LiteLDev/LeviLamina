#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SignItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ItemStackBase;
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    virtual ~HangingSignItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const*
    _getCeilingHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;

    MCAPI ::Block const*
    _getWallHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
