#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"
#include "mc/world/item/crafting/ShapelessRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShulkerBoxRecipe : public ::ShapelessRecipe {
public:
    // prevent constructor by default
    ShulkerBoxRecipe& operator=(ShulkerBoxRecipe const&);
    ShulkerBoxRecipe(ShulkerBoxRecipe const&);
    ShulkerBoxRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShulkerBoxRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 12
    virtual bool itemsMatch(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs) const;

    MCAPI explicit ShulkerBoxRecipe(struct Recipe::ConstructionContext&& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct Recipe::ConstructionContext&& context);

    MCAPI std::vector<class ItemInstance> const&
          assemble$(class CraftingContainer& craftSlots, class CraftingContext&) const;

    MCAPI bool itemsMatch$(class ItemDescriptor const& lhs, class ItemDescriptor const& rhs) const;

    MCAPI static class mce::UUID const& ID();

    // NOLINTEND
};
