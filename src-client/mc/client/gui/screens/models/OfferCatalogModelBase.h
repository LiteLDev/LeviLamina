#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/gui/screens/models/PlatformOfferModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FlightingService;
class IOfferRepository;
struct ProductSku;
// clang-format on

class OfferCatalogModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>> mOfferRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FlightingService>> mFlightingService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                           mExistenceTracker;
    ::ll::TypedStorage<4, 4, ::OfferCatalogStatus>                               mCatalogStatus;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlatformOfferModel>>               mOfferModels;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlatformOfferModel>>               mActiveOfferModels;
    ::ll::TypedStorage<8, 328, ::PlatformOfferModel>                             mInvalidOfferModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferCatalogModelBase() = default;

    virtual ::OfferCatalogStatus update() = 0;

    virtual void fetchAllCoinOffers() = 0;

    virtual uint getNumOfferModels() const;

    virtual uint getNumActiveOfferModels() const;

    virtual ::PlatformOfferModel& getOfferModel(int);

    virtual ::PlatformOfferModel& getActiveOfferModel(int);

    virtual ::PlatformOfferModel* findOfferModelBySku(::ProductSku const&);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(::std::string const&);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(int const);

    virtual ::PlatformOfferModel* _findActiveOfferModelByProductId(::std::string const&);

    virtual ::PlatformOfferModel* _findOfferModelByProductId(::std::string const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
