#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IMarketplaceContentOffersProvider;
struct IEntitlementManager;
struct IStoreCatalogRepository;
struct MarketplaceServicesManager;
struct ServicesManager;
namespace World { struct MarketplaceWorldTemplateData; }
// clang-format on

namespace World {

class FeaturedWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IMarketplaceContentOffersProvider>>   mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::MarketplaceWorldTemplateData>> mFeaturedWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeaturedWorldTemplateManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeaturedWorldTemplateManager(
        ::std::shared_ptr<::IMarketplaceContentOffersProvider>   suggestedContentOffersProvider,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager
    );

    MCAPI FeaturedWorldTemplateManager(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );

    MCAPI ::std::vector<::World::MarketplaceWorldTemplateData> const _getTemplates() const;

    MCAPI void _onOfferPurchased(::std::string const& productId);

    MCAPI void _prepareOffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> UPSELL_QUERY_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::IMarketplaceContentOffersProvider>   suggestedContentOffersProvider,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::ServicesManager&                                       servicesManager,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
