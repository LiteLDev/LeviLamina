#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourcePackStack;
struct IMinecraftEventing;
struct LinkedAssetValidator;
namespace CraftingItemCatalogPackStackLoadUtils { struct LoadResult; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CraftingItemCatalogPackStackLoadUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::CraftingItemCatalogPackStackLoadUtils::LoadResult> load(
    ::ResourcePackStack const&                         packStack,
    ::cereal::ReflectionCtx const&                     ctx,
    ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
    ::IMinecraftEventing&                              eventing
);
// NOLINTEND

} // namespace CraftingItemCatalogPackStackLoadUtils
