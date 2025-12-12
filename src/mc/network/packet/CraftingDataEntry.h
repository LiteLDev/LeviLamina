#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/packet/CraftingDataEntryType.h"
#include "mc/platform/Result.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class ItemInstance;
class MultiRecipe;
class ReadOnlyBinaryStream;
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
    // prevent constructor by default
    CraftingDataEntry& operator=(CraftingDataEntry const&);
    CraftingDataEntry(CraftingDataEntry const&);
    CraftingDataEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingDataEntry(::CraftingDataEntry&& entry);

    MCNAPI_C void addFurnaceAuxRecipe(::Recipes& recipes, ::BlockPalette& blockPalette) const;

    MCNAPI_C void addFurnaceRecipe(::Recipes& recipes, ::BlockPalette& blockPalette) const;

    MCNAPI_C void addMultiRecipe(::Recipes& recipes) const;

    MCNAPI_C void addShapedChemistryRecipe(::Recipes& recipes) const;

    MCNAPI_C void addShapedRecipe(::Recipes& recipes) const;

    MCNAPI_C void addSmithingTransformRecipe(::Recipes& recipes) const;

    MCNAPI_C void addSmithingTrimRecipe(::Recipes& recipes) const;

    MCNAPI_C void addUserDataShapelessRecipe(::Recipes& recipes) const;

    MCNAPI void fillFromFurnaceAuxRecipe(int itemData, ::ItemInstance const& result, ::HashedString const& tag);

    MCNAPI void fillFromMultiRecipe(::MultiRecipe const& recipe);

    MCNAPI void fillFromRecipe(::Recipe const& recipe);

    MCNAPI_C ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCNAPI ~CraftingDataEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CraftingDataEntry&& entry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
