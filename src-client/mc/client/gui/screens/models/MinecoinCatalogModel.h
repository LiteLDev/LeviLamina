#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogModelBase.h"
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct ContentCatalogService;
struct FlightingService;
struct IOfferRepository;
struct MinecoinDocument;
struct MinecoinSearchResults;
namespace Bedrock::Http { class Status; }
namespace Core { class Path; }
namespace Social { class IUserManager; }
// clang-format on

class MinecoinCatalogModel : public ::OfferCatalogModelBase {
public:
    // MinecoinCatalogModel inner types declare
    // clang-format off
    struct ActiveModelImageTracker;
    // clang-format on

    // MinecoinCatalogModel inner types define
    struct ActiveModelImageTracker {
    public:
        // ActiveModelImageTracker inner types define
        enum class FetchState : uchar {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentCatalogService>> mContentCatalogService;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecoinCatalogModel::ActiveModelImageTracker>>
                                                       mActiveModelImageTrackerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mExistenceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecoinCatalogModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecoinCatalogModel() /*override*/ = default;

    virtual ::OfferCatalogStatus update() /*override*/;

    virtual void fetchAllCoinOffers() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecoinCatalogModel(
        ::Bedrock::NotNullNonOwnerPtr<::FlightingService> const&     flightingService,
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> const&     offerRepository,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>           dateManager
    );

    MCAPI void _addOfferModelFromDocument(::MinecoinDocument const& document, ::std::string const& productPrefix);

    MCAPI void _fetchKeyArtForActiveOfferModel(::MinecoinCatalogModel::ActiveModelImageTracker& modelFetchImageInfo);

    MCAPI void _handleOfferSearchResults(::std::weak_ptr<bool> weakExistence, ::MinecoinSearchResults const& results);

    MCAPI void _monitorActiveModelImageTrackers();

    MCAPI void _onFetchKeyArtForActiveOfferModelFinished(
        ::std::weak_ptr<bool>   weakExistence,
        ::std::string const&    activeModelProductId,
        ::Bedrock::Http::Status status,
        ::Core::Path const&     fullpath
    );

    MCAPI void
    _onTreatmentTagsReceived(::std::weak_ptr<bool> weakExistence, ::std::vector<::std::string> const& treatments);

    MCAPI void _updateActiveOfferModelImageTrackerStatus(
        ::std::string const&                                        activeModelProcuctId,
        ::MinecoinCatalogModel::ActiveModelImageTracker::FetchState newFetchState
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OfferCatalogStatus $update();

    MCAPI void $fetchAllCoinOffers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
