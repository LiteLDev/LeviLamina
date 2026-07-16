#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/packet/CraftingDataEntryType.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
class Recipe;
class Recipes;
// clang-format on

class CraftingDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Recipe>>      mRecipe;
    ::ll::TypedStorage<4, 4, int>                              mItemData;
    ::ll::TypedStorage<4, 4, int>                              mItemAux;
    ::ll::TypedStorage<8, 48, ::HashedString>                  mTag;
    ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor> mItemResult;
    ::ll::TypedStorage<4, 4, ::CraftingDataEntryType>          mEntryType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void addMultiRecipe(::Recipes& recipes) const;

    MCAPI void addShapedChemistryRecipe(::Recipes& recipes) const;

    MCAPI void addShapedRecipe(::Recipes& recipes) const;

    MCAPI void addShapelessChemistryRecipe(::Recipes& recipes) const;

    MCAPI void addShapelessRecipe(::Recipes& recipes) const;

    MCAPI void addSmithingTransformRecipe(::Recipes& recipes) const;

    MCAPI void addSmithingTrimRecipe(::Recipes& recipes) const;

    MCAPI void addUserDataShapelessRecipe(::Recipes& recipes) const;
#endif
    // NOLINTEND
};
