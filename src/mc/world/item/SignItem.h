#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/level/block/SignBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
// clang-format on

class SignItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk93bee2;
    ::ll::UntypedStorage<4, 4>  mUnkec44d4;
    // NOLINTEND

public:
    // prevent constructor by default
    SignItem& operator=(SignItem const&);
    SignItem(SignItem const&);
    SignItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 121
    virtual ::Block const* getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~SignItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignItem(::std::string const& name, int id, ::SignBlock::SignType type);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool calculatePlacePos(::Actor& entity, uchar& face, ::BlockPos& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::SignBlock::SignType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const* $getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
