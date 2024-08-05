#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/MultiRecipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ShieldRecipe : public ::MultiRecipe {
public:
    // prevent constructor by default
    ShieldRecipe& operator=(ShieldRecipe const&);
    ShieldRecipe(ShieldRecipe const&);
    ShieldRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShieldRecipe() = default;

    // vIndex: 1
    virtual std::vector<class ItemInstance> const&
    assemble(class CraftingContainer& craftSlots, class CraftingContext&) const;

    // vIndex: 2
    virtual int getCraftingSize() const;

    // vIndex: 3
    virtual class RecipeIngredient const& getIngredient(int, int) const;

    // vIndex: 4
    virtual bool isShapeless() const;

    // vIndex: 5
    virtual bool matches(class CraftingContainer const& craftSlots, class CraftingContext const&) const;

    // vIndex: 6
    virtual int size() const;

    // vIndex: 8
    virtual std::vector<class ItemInstance> const& getResultItems() const;

    MCAPI ShieldRecipe(std::string const&, class mce::UUID const*);

    MCAPI static class mce::UUID ID;

    // NOLINTEND
};
