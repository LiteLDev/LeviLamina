#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ContainerMixDataEntry.h"
#include "mc/network/packet/MaterialReducerDataEntry.h"
#include "mc/network/packet/PotionMixDataEntry.h"

// auto generated forward declare list
// clang-format off
class Recipes;
struct MultiRecipePayload;
struct ShapedRecipePayload;
struct ShapelessRecipePayload;
struct SmithingTransformRecipePayload;
struct SmithingTrimRecipePayload;
// clang-format on

struct CraftingDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapedRecipePayload>>            mShapedRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mShapelessRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::MultiRecipePayload>>             mMultiRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mUserDataShapelessRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapelessRecipePayload>>         mShapelessChemistryRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShapedRecipePayload>>            mShapedChemistryRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SmithingTransformRecipePayload>> mSmithingTransformRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::SmithingTrimRecipePayload>>      mSmithingTrimRecipes;
    ::ll::TypedStorage<8, 24, ::std::vector<::PotionMixDataEntry>>             mPotionMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerMixDataEntry>>          mContainerMixEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::MaterialReducerDataEntry>>       mMaterialReducerEntries;
    ::ll::TypedStorage<1, 1, bool>                                             mClearRecipes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CraftingDataPacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CraftingDataPacketPayload fromRecipes(::Recipes const& levelRecipes, bool onlyCraftingRecipes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
