#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackStack;
namespace CraftingItemCatalogPackStackLoadUtils { struct LoadResult; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CraftingItemCatalogPackStackLoadUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::CraftingItemCatalogPackStackLoadUtils::LoadResult>
load(::ResourcePackStack const& packStack, ::cereal::ReflectionCtx const& ctx);
// NOLINTEND

} // namespace CraftingItemCatalogPackStackLoadUtils
