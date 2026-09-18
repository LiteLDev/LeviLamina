#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/shared_types/v1_26_50/item/crafting_item_catalog/CraftingCatalogDocument.h"

namespace CraftingItemCatalogPackStackLoadUtils {

struct LoadResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_26_50::CraftingCatalogDocument>           mData;
    ::ll::TypedStorage<8, 1032, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>> mPackCraftingCatalogFilePath;
    // NOLINTEND
};

} // namespace CraftingItemCatalogPackStackLoadUtils
