#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
struct RecipeNetIdTag;
// clang-format on

struct SmithingTransformRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mRecipeId;
    ::ll::TypedStorage<8, 24, ::cerealizer<::RecipeIngredient>::SerializedData>              mTemplateIngredient;
    ::ll::TypedStorage<8, 24, ::cerealizer<::RecipeIngredient>::SerializedData>              mBaseIngredient;
    ::ll::TypedStorage<8, 24, ::cerealizer<::RecipeIngredient>::SerializedData>              mAdditionIngredient;
    ::ll::TypedStorage<8, 48, ::cerealizer<::NetworkItemInstanceDescriptor>::SerializedData> mResult;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mTag;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>                                                  mNetId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SmithingTransformRecipePayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
