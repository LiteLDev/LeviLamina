#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

struct ShapelessRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                   mRecipeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::cerealizer<::RecipeIngredient>::SerializedData>> mIngredients;
    ::ll::TypedStorage<8, 24, ::std::vector<::cerealizer<::NetworkItemInstanceDescriptor>::SerializedData>> mResults;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                                  mUuid;
    ::ll::TypedStorage<8, 32, ::std::string>                                                                mTag;
    ::ll::TypedStorage<4, 4, int>                                                                           mPriority;
    ::ll::TypedStorage<8, 48, ::std::optional<::cerealizer<::RecipeUnlockingRequirement>::SerializedData>>
                                            mUnlockingRequirement;
    ::ll::TypedStorage<4, 4, ::RecipeNetId> mNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ShapelessRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
