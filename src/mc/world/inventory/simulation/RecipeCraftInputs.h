#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerValidationCraftInputs.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

struct RecipeCraftInputs : public ::ContainerValidationCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8dfabf;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeCraftInputs& operator=(RecipeCraftInputs const&);
    RecipeCraftInputs(RecipeCraftInputs const&);
    RecipeCraftInputs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RecipeCraftInputs(::RecipeNetId const& recipeNetId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RecipeNetId const& recipeNetId);
    // NOLINTEND
};
