#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/commerce/StorePlatform.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/events/IMinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class Entitlement;
class EntitlementChangeListener;
class IEntitlement;
class PurchaseReceiptPacket;
struct PurchaseInfo;
namespace Bedrock::Http { class Status; }
namespace Bedrock::PubSub { class Subscription; }
namespace mce { class UUID; }
// clang-format on

class IEntitlementManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntitlementManager() /*override*/ = default;

    // vIndex: 1
    virtual void tick() = 0;

    // vIndex: 2
    virtual void refreshInventoryIfNeeded() = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> loadEntitlementCacheIfNeeded() = 0;

    // vIndex: 4
    virtual void
    processLegacyOfferOwnership(::std::string const&, bool, ::std::vector<::PurchaseInfo> const&, ::std::string const&) = 0;

    // vIndex: 5
    virtual void purchaseCoinOffer(::PurchaseInfo const&, ::std::string const&, ::std::function<void(bool)>) = 0;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> processExternalStorePurchases() = 0;

    // vIndex: 7
    virtual void
    processSubscriptionPurchase(::StorePlatform, ::PurchaseInfo const&, ::std::string const&, ::std::function<void(::TransactionStatus, ::Bedrock::Http::Status)>) = 0;

    // vIndex: 8
    virtual int getBalance() = 0;

    // vIndex: 9
    virtual bool hasAnActiveDeviceAccount() = 0;

    // vIndex: 10
    virtual bool hasDeviceAccountBeenUsed() = 0;

    // vIndex: 11
    virtual bool isRefreshingEntitlements() const = 0;

    // vIndex: 12
    virtual void refreshEntitlements() = 0;

    // vIndex: 13
    virtual ::StorePlatform getCommerceStoreNameFromPlatformStoreName(::std::string const&) const = 0;

    // vIndex: 14
    virtual ::std::string const& getInventoryVersion() const = 0;

    // vIndex: 15
    virtual void setInventoryVersionAndUpdateInventory(::std::string const&) = 0;

    // vIndex: 16
    virtual void deleteCachedInventory() = 0;

    // vIndex: 17
    virtual void forceInventoryRefresh() = 0;

    // vIndex: 18
    virtual ::std::optional<::PurchaseReceiptPacket> createThirdPartyReceiptPacket(::std::string const&) = 0;

    // vIndex: 19
    virtual ::IEntitlement const& getEntitlement(::ContentIdentity const&) = 0;

    // vIndex: 20
    virtual ::std::vector<::mce::UUID> getOwnedEntitlementIds() const = 0;

    // vIndex: 21
    virtual void getEntitlementsByCreator(::std::string const&, ::std::vector<::Entitlement>&) = 0;

    // vIndex: 22
    virtual ::std::string const& getThirdPartyReceipt(::std::string const&) = 0;

    // vIndex: 23
    virtual void
    purchaseCatalogOffer(::std::string const&, ::std::string const&, ::std::string const&, ::IMinecraftEventing::StoreType, ::std::string const&, ::std::string const&, ::std::function<void(::TransactionStatus)>) = 0;

    // vIndex: 24
    virtual void
    redeemRealmsCatalogOffer(::std::string const&, ::std::string const&, ::std::function<void(::TransactionStatus)>) = 0;

    // vIndex: 25
    virtual void transferDeviceAccountToXboxLive(::std::function<void(bool)>) = 0;

    // vIndex: 26
    virtual void markDeviceOwnership(::ContentIdentity const&, ::std::string const&) = 0;

    // vIndex: 27
    virtual void setDeviceEntitlements(::std::vector<::PurchaseInfo> const&) = 0;

    // vIndex: 28
    virtual void addEntitlementInventoryRefreshListener(::std::weak_ptr<::EntitlementChangeListener>) = 0;

    // vIndex: 29
    virtual ::Bedrock::PubSub::Subscription
        subscribeToOfferPurchaseSuccessEvent(::std::function<void(::std::string const&)>) = 0;

    // vIndex: 30
    virtual bool hasInventoryUpdated() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
