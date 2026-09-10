#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

namespace ItemStackRequestCereal {

struct CraftRecipeOptionalActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mRecipeNetId;
    ::ll::TypedStorage<4, 4, int>           mFilteredStringIndex;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
