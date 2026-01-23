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
struct Offer;
struct PlatformOfferPurchaseDetails;
struct ProductSku;
// clang-format on

class IPurchaseEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPurchaseEventing() = default;

    virtual void fireEventIAPPurchaseAttempt(::std::string const&, ::std::string const&, ::Offer&, ::PurchasePath) = 0;

    virtual void fireEventIAPPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::Offer&,
        ::StoreEventData::PurchaseResult,
        ::PurchasePath
    ) = 0;

    virtual void
    fireEventIAPRedeemAttempt(::std::string const&, ::std::string const&, ::std::string const&, ::PurchasePath) = 0;

    virtual void fireEventIAPRedeemResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::StoreEventData::PurchaseResult,
        ::PurchasePath
    ) = 0;

    virtual void fireEventPurchaseAttempt(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::StoreEventData::StoreType,
        ::PurchasePath,
        ::std::optional<uint64>
    ) = 0;

    virtual void fireEventPurchaseResolved(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::StoreEventData::StoreType,
        ::StoreEventData::PurchaseResult,
        ::PurchasePath,
        ::std::optional<uint64>
    ) = 0;

    virtual void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails&) = 0;

    virtual void fireEventRealmsPurchase(
        ::std::string const&,
        ::RealmsPurchaseFlow,
        ::RealmsPurchaseIntent,
        ::RealmsOfferPeriod,
        ::RealmsOfferTier,
        bool,
        ::ProductSku const&,
        ::RealmsPurchaseStage,
        ::RealmsPurchaseStatus,
        ::RealmsPurchaseTelemetryFailureReason,
        ::std::vector<::Offer*> const&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
