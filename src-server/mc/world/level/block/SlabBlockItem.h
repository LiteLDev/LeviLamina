#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/BlockItem.h"

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

class SlabBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mDoubleSlabId;
    // NOLINTEND

public:
    // prevent constructor by default
    SlabBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 123
    virtual ::InteractionResult _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const /*override*/;

    // vIndex: 121
    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& actor, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 0
    virtual ~SlabBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlabBlockItem(::std::string const& name, int id, ::HashedString const& doubleSlabId);

    MCAPI bool _canConvertToDoubleBlock(::ItemStackBase& instance, ::Actor&, uchar& face, ::Block const& block) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::HashedString const& doubleSlabId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InteractionResult $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& actor, uchar& face, ::BlockPos& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
