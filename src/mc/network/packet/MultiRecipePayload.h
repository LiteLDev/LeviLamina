#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

struct MultiRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mUuid;
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mNetId;
    // NOLINTEND
};
