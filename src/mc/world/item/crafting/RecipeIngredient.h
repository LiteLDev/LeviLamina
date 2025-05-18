#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class Item;
class ReadOnlyBinaryStream;
struct ItemTag;
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    RecipeIngredient();

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

    MCAPI RecipeIngredient(::ItemTag const& itemTag, ushort stackSize);

    MCAPI RecipeIngredient(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI RecipeIngredient(::Item const& item, int auxValue, ushort stackSize);

    MCFOLD ::RecipeIngredient& operator=(::RecipeIngredient const&);
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

    MCAPI void* $ctor(::ItemTag const& itemTag, ushort stackSize);

    MCAPI void* $ctor(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI void* $ctor(::Item const& item, int auxValue, ushort stackSize);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
