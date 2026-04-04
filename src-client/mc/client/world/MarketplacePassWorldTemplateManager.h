#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/DownloadableTemplateManagerBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IContentAcquisition;
class IEntitlementManager;
class IMarketplaceContentOffersProvider;
class IStoreCatalogRepository;
class IWorldTemplateManager;
class MarketplaceServicesManager;
class ServicesManager;
namespace World { struct MarketplaceWorldTemplateData; }
// clang-format on

namespace World {

class MarketplacePassWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                      mIsDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalogRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IMarketplaceContentOffersProvider>>   mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferPurchaseSuccessSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::MarketplaceWorldTemplateData>> mMarketplacePassWorldTemplateList;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplacePassWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MarketplacePassWorldTemplateManager() /*override*/;

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplacePassWorldTemplateManager(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager> worldTemplateManager,
        ::IContentAcquisition&                                 contentAquisition,
        ::std::shared_ptr<::IMarketplaceContentOffersProvider> offersProvider
    );

    MCAPI MarketplacePassWorldTemplateManager(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>   worldTemplateManager,
        ::ServicesManager&                                       servicesManager,
        ::IContentAcquisition&                                   contentAquisition,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );

    MCAPI ::std::vector<::World::MarketplaceWorldTemplateData> _getTemplates();

    MCAPI void _localWorldUpdateCallback(::std::pair<::std::string, bool> const& updatedTemplateData);

    MCAPI void _onOfferPurchased(::std::string const& productId);

    MCAPI void _prepareOffers();

    MCAPI void isTemplateOwnedThroughPassOnly(::std::string const& templateId, ::std::function<void(bool)> callback);

    MCAPI void update(double);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> MARKETPLACE_PASS_TEMPLATES_TITLE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REALMS_PLUS_QUERY_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager> worldTemplateManager,
        ::IContentAcquisition&                                 contentAquisition,
        ::std::shared_ptr<::IMarketplaceContentOffersProvider> offersProvider
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager>             dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>     entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>   worldTemplateManager,
        ::ServicesManager&                                       servicesManager,
        ::IContentAcquisition&                                   contentAquisition,
        ::MarketplaceServicesManager&                            marketplaceServicesManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
