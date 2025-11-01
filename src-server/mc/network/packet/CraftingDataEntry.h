#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/packet/CraftingDataEntryType.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class MultiRecipe;
class Recipe;
// clang-format on

class CraftingDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Recipe>> mRecipe;
    ::ll::TypedStorage<4, 4, int> mItemData;
    ::ll::TypedStorage<4, 4, int> mItemAux;
    ::ll::TypedStorage<8, 48, ::HashedString> mTag;
    ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor> mItemResult;
    ::ll::TypedStorage<4, 4, ::CraftingDataEntryType> mEntryType;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingDataEntry& operator=(CraftingDataEntry const&);
    CraftingDataEntry(CraftingDataEntry const&);
    CraftingDataEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CraftingDataEntry(::CraftingDataEntry&& entry);

    MCAPI void fillFromFurnaceAuxRecipe(int itemData, ::ItemInstance const& result, ::HashedString const& tag);

    MCAPI void fillFromMultiRecipe(::MultiRecipe const& recipe);

    MCAPI void fillFromRecipe(::Recipe const& recipe);

    MCAPI ~CraftingDataEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CraftingDataEntry&& entry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
