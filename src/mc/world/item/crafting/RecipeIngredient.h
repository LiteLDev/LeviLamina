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
    // prevent constructor by default
    RecipeIngredient& operator=(RecipeIngredient const&);
    RecipeIngredient();

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

    MCAPI static class RecipeIngredient EMPTY_INGREDIENT;

    // NOLINTEND
};
