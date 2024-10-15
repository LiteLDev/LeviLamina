#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptorCount.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RecipeIngredient : public ::ItemDescriptorCount {
public:
    RecipeIngredient() = delete;

    RecipeIngredient& operator=(RecipeIngredient&&)      = default;
    RecipeIngredient& operator=(RecipeIngredient const&) = default;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecipeIngredient();

    MCAPI explicit RecipeIngredient(class ReadOnlyBinaryStream& stream);

    MCAPI RecipeIngredient(class RecipeIngredient&&);

    MCAPI RecipeIngredient(class RecipeIngredient const&);

    MCAPI RecipeIngredient(class Block const& block, ushort stackSize);

    MCAPI RecipeIngredient(class BlockLegacy const& block, ushort stackSize);

    MCAPI RecipeIngredient(class ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI RecipeIngredient(struct ItemTag const& itemTag, ushort stackSize);

    MCAPI RecipeIngredient(class Item const& item, int auxValue, ushort stackSize);

    MCAPI RecipeIngredient(std::string_view item, int auxValue, ushort stackSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ItemDescriptor const& descriptor, ushort stackSize);

    MCAPI void* ctor$(class Block const& block, ushort stackSize);

    MCAPI void* ctor$(class RecipeIngredient const&);

    MCAPI void* ctor$(struct ItemTag const& itemTag, ushort stackSize);

    MCAPI void* ctor$(class Item const& item, int auxValue, ushort stackSize);

    MCAPI void* ctor$(class ReadOnlyBinaryStream& stream);

    MCAPI void* ctor$(class BlockLegacy const& block, ushort stackSize);

    MCAPI void* ctor$(class RecipeIngredient&&);

    MCAPI void* ctor$(std::string_view item, int auxValue, ushort stackSize);

    MCAPI void dtor$();

    MCAPI static class RecipeIngredient& EMPTY_INGREDIENT();

    // NOLINTEND
};
