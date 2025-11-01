#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/shared_types/v1_21_60/item/crafting_item_catalog/CraftingCatalogDocument.h"

namespace CraftingItemCatalogPackStackLoadUtils {

struct LoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::CraftingCatalogDocument> mData;
    ::ll::TypedStorage<8, 1032, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>> mPackCraftingCatalogFilePath;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadResult& operator=(LoadResult const&);
    LoadResult(LoadResult const&);
    LoadResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadResult(::CraftingItemCatalogPackStackLoadUtils::LoadResult&&);

    MCAPI ~LoadResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CraftingItemCatalogPackStackLoadUtils::LoadResult&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
