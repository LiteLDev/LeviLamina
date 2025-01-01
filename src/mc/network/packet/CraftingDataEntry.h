#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CraftingDataEntryType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class HashedString;
class MultiRecipe;
class NetworkItemInstanceDescriptor;
class Recipe;
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
    MCAPI CraftingDataEntry(::CraftingDataEntry&& entry);

    MCAPI void fillFromMultiRecipe(::MultiRecipe const& recipe);

    MCAPI void fillFromRecipe(::Recipe const& recipe);

    MCAPI void write(::BinaryStream& stream) const;

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
