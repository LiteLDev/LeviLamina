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
    // vIndex: 121
    virtual ::Block const* getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const
        /*override*/;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 0
    virtual ~HangingSignItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Block const*
    _getCeilingHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;

    MCNAPI ::Block const*
    _getWallHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const* $getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
