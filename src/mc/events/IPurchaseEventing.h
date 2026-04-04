#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/RealmsOfferPeriod.h"
#include "mc/client/store/iap/RealmsOfferTier.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/client/store/iap/transactions/RealmsPurchaseFlow.h"
#include "mc/events/RealmsPurchaseStage.h"
#include "mc/events/RealmsPurchaseStatus.h"
#include "mc/events/RealmsPurchaseTelemetryFailureReason.h"
#include "mc/events/store_event_data/PurchaseResult.h"
#include "mc/events/store_event_data/StoreType.h"

// auto generated forward declare list
// clang-format off
class Offer;
struct PlatformOfferPurchaseDetails;
struct ProductSku;
// clang-format on

class IPurchaseEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPurchaseEventing() = default;

    virtual void fireEventIAPPurchaseAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::Offer&             offer,
        ::PurchasePath       path
    ) = 0;

    virtual void fireEventIAPPurchaseResolved(
        ::std::string const&             correlationId,
        ::std::string const&             storeId,
        ::Offer&                         offer,
        ::StoreEventData::PurchaseResult purchaseRes,
        ::PurchasePath                   path
    ) = 0;

    virtual void fireEventIAPRedeemAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::std::string const& productId,
        ::PurchasePath       path
    ) = 0;

    virtual void fireEventIAPRedeemResolved(
        ::std::string const&             correlationId,
        ::std::string const&             storeId,
        ::std::string const&             productId,
        ::StoreEventData::PurchaseResult purchaseRes,
        ::PurchasePath                   path
    ) = 0;

    virtual void fireEventPurchaseAttempt(
        ::std::string const&        correlationId,
        ::std::string const&        productId,
        ::std::string const&        price,
        ::StoreEventData::StoreType storeType,
        ::PurchasePath              path,
        ::std::optional<uint64>     durationPurchasedSec
    ) = 0;

    virtual void fireEventPurchaseResolved(
        ::std::string const&             correlationId,
        ::std::string const&             productId,
        ::std::string const&             price,
        ::StoreEventData::StoreType      storeType,
        ::StoreEventData::PurchaseResult purchaseRes,
        ::PurchasePath                   path,
        ::std::optional<uint64>          durationPurchasedSec
    ) = 0;

    virtual void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails& unfulfilledPurchase) = 0;

    virtual void fireEventRealmsPurchase(
        ::std::string const&                   correlationId,
        ::RealmsPurchaseFlow                   purchaseFlow,
        ::RealmsPurchaseIntent                 intent,
        ::RealmsOfferPeriod                    offerPeriod,
        ::RealmsOfferTier                      offerTier,
        bool                                   isTrial,
        ::ProductSku const&                    productSku,
        ::RealmsPurchaseStage                  purchaseStage,
        ::RealmsPurchaseStatus                 purchaseStatus,
        ::RealmsPurchaseTelemetryFailureReason failureReason,
        ::std::vector<::Offer*> const&         unavailableOffers
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
