#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class Item;
class ItemDescriptor;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
public:
    RecipeIngredient() = delete;

    RecipeIngredient& operator=(RecipeIngredient&&)      = default;
    RecipeIngredient& operator=(RecipeIngredient const&) = default;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecipeIngredient() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecipeIngredient(::RecipeIngredient const&);

    MCAPI explicit RecipeIngredient(::ReadOnlyBinaryStream& stream);

    MCAPI RecipeIngredient(::BlockLegacy const& block, ushort stackSize);

    MCAPI RecipeIngredient(::Block const& block, ushort stackSize);

    MCAPI RecipeIngredient(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI RecipeIngredient(::ItemTag const& itemTag, ushort stackSize);

    MCAPI RecipeIngredient(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI RecipeIngredient(::Item const& item, int auxValue, ushort stackSize);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RecipeIngredient& EMPTY_INGREDIENT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RecipeIngredient const&);

    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);

    MCAPI void* $ctor(::BlockLegacy const& block, ushort stackSize);

    MCAPI void* $ctor(::Block const& block, ushort stackSize);

    MCAPI void* $ctor(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI void* $ctor(::ItemTag const& itemTag, ushort stackSize);

    MCAPI void* $ctor(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI void* $ctor(::Item const& item, int auxValue, ushort stackSize);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
