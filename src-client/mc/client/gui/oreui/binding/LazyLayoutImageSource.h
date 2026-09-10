#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class ILayoutImageSource;
class MarketplaceImageSource;
// clang-format on

namespace OreUI {

class LazyLayoutImageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>()>>
                                                                          mGetContentCatalogServiceProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MarketplaceImageSource>> mImageSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ILayoutImageSource> getOrCreate();
    // NOLINTEND
};

} // namespace OreUI
