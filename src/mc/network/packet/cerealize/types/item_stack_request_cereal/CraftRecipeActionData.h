#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

namespace ItemStackRequestCereal {

struct CraftRecipeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>         mNumCrafts;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
