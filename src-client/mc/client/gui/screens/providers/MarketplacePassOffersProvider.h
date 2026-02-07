#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/providers/MarketplaceContentOffersProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct IStoreCatalogRepository;
struct MarketplaceServicesManager;
struct ServicesManager;
struct StoreCatalogItem;
// clang-format on

class MarketplacePassOffersProvider : public ::MarketplaceContentOffersProvider {
public:
    // prevent constructor by default
    MarketplacePassOffersProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::function<bool(::StoreCatalogItem const&)> _getFilterFunction() /*override*/;

    virtual ~MarketplacePassOffersProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassOffersProvider(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::function<bool(::StoreCatalogItem const&)> $_getFilterFunction();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
