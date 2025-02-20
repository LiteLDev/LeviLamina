#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CraftingItemCatalogMergeResult;
class ItemRegistryRef;
namespace CraftingItemCatalogPackStackLoadUtils { struct LoadResult; }
// clang-format on

namespace CraftingItemCatalogMergeUtils {
// functions
// NOLINTBEGIN
MCAPI ::CraftingItemCatalogMergeResult mergeLoadResults(
    ::ItemRegistryRef const&                                                  itemRegistry,
    ::std::vector<::CraftingItemCatalogPackStackLoadUtils::LoadResult> const& loadResults
);
// NOLINTEND

} // namespace CraftingItemCatalogMergeUtils
