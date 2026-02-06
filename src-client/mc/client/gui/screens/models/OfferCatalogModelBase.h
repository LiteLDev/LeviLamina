#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/gui/screens/models/PlatformOfferModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct FlightingService;
struct IOfferRepository;
struct ProductSku;
namespace Social { class IUserManager; }
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
    ::ll::TypedStorage<8, 320, ::PlatformOfferModel>                             mInvalidOfferModel;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferCatalogModelBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OfferCatalogModelBase();

    virtual ::OfferCatalogStatus update() = 0;

    virtual void fetchAllCoinOffers() = 0;

    virtual uint getNumOfferModels() const;

    virtual uint getNumActiveOfferModels() const;

    virtual ::PlatformOfferModel& getOfferModel(int index);

    virtual ::PlatformOfferModel& getActiveOfferModel(int index);

    virtual ::PlatformOfferModel* findOfferModelBySku(::ProductSku const& sku);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(::std::string const& coinsNeeded);

    virtual ::PlatformOfferModel* findOfferModelByMinCoins(int const coinsNeeded);

    virtual ::PlatformOfferModel* _findActiveOfferModelByProductId(::std::string const& productId);

    virtual ::PlatformOfferModel* _findOfferModelByProductId(::std::string const& productId);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OfferCatalogModelBase(
        ::Bedrock::NotNullNonOwnerPtr<::FlightingService> const&     flightingService,
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> const&     offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>           dateManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::FlightingService> const&     flightingService,
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> const&     offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>           dateManager
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
    MCAPI uint $getNumOfferModels() const;

    MCAPI uint $getNumActiveOfferModels() const;

    MCAPI ::PlatformOfferModel& $getOfferModel(int index);

    MCAPI ::PlatformOfferModel& $getActiveOfferModel(int index);

    MCAPI ::PlatformOfferModel* $findOfferModelBySku(::ProductSku const& sku);

    MCAPI ::PlatformOfferModel* $findOfferModelByMinCoins(::std::string const& coinsNeeded);

    MCAPI ::PlatformOfferModel* $findOfferModelByMinCoins(int const coinsNeeded);

    MCAPI ::PlatformOfferModel* $_findActiveOfferModelByProductId(::std::string const& productId);

    MCAPI ::PlatformOfferModel* $_findOfferModelByProductId(::std::string const& productId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
