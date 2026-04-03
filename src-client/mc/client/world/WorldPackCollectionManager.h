#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentTierManager;
struct IEntitlementManager;
struct IMarketplacePackDownloader;
namespace World { class IWorldPackCollectionManager; }
// clang-format on

namespace World::WorldPackCollectionManager {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::World::IWorldPackCollectionManager> create(
    ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
    ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
    ::std::unique_ptr<::IMarketplacePackDownloader>&&          marketplacePackDownloader
);
// NOLINTEND

} // namespace World::WorldPackCollectionManager
