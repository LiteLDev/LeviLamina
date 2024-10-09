#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class MultiRecipe : public ::Recipe {
public:
    // prevent constructor by default
    MultiRecipe& operator=(MultiRecipe const&);
    MultiRecipe(MultiRecipe const&);
    MultiRecipe();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultiRecipe() = default;

    // vIndex: 4
    virtual bool isShapeless() const;

    // vIndex: 9
    virtual bool isMultiRecipe() const;

    // vIndex: 10
    virtual bool hasDataDrivenResult() const;

    MCAPI MultiRecipe(std::string const& recipeId, class HashedString tag);

    // NOLINTEND
};
