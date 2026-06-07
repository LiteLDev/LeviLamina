#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/SignItem.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ItemStackBase;
// clang-format on

class HangingSignItem : public ::SignItem {
public:
    // prevent constructor by default
    HangingSignItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const
        /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase& entity, ::Actor& face, uchar& pos, ::BlockPos&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HangingSignItem(::std::string const& name, int id, ::SignBlock::SignType type);

    MCAPI ::Block const*
    _getCeilingHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;

    MCAPI ::Block const*
    _getWallHangingSignBlock(::Actor const& entity, uchar const& face, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::SignBlock::SignType type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase& entity, ::Actor& face, uchar& pos, ::BlockPos&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
