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
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::SignBlock::SignType, ::std::tuple<::Block const*, ::Block const*, ::Block const*>>>
                                                    mConvertMap;
    ::ll::TypedStorage<4, 4, ::SignBlock::SignType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    SignItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual ::Block const* getBlockToPlace(uchar const face, ::Actor const& entity, ::BlockPos const pos) const;

    // vIndex: 120
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 122
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

    MCFOLD bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
