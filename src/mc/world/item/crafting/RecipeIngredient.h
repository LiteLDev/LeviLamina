#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
class Block;
class Item;
class ItemDescriptor;
class ReadOnlyBinaryStream;
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
public:
    // prevent constructor by default
    RecipeIngredient();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RecipeIngredient(::ReadOnlyBinaryStream& stream);

    MCAPI RecipeIngredient(::Block const& block, ushort stackSize);

    MCAPI RecipeIngredient(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI RecipeIngredient(::Item const& item, int auxValue, ushort stackSize);

    MCAPI RecipeIngredient(::std::string_view item, int auxValue, ushort stackSize);

    MCAPI bool isEmpty() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RecipeIngredient& EMPTY_INGREDIENT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream);

    MCAPI void* $ctor(::Block const& block, ushort stackSize);

    MCAPI void* $ctor(::ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI void* $ctor(::Item const& item, int auxValue, ushort stackSize);

    MCAPI void* $ctor(::std::string_view item, int auxValue, ushort stackSize);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
