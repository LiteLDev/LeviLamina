#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/RecipeIngredientData.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
namespace ItemStackRequestCereal { struct RecipeIngredientData; }
// clang-format on

namespace ItemStackRequestCereal {

struct CraftRecipeAutoActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                                                  mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                                                          mNumCrafts;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackRequestCereal::RecipeIngredientData>> mIngredients;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
