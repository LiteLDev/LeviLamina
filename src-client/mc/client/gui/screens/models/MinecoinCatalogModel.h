#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/OfferCatalogModelBase.h"
#include "mc/client/gui/screens/models/OfferCatalogStatus.h"
#include "mc/client/services/catalog/CommonImage.h"
#include "mc/client/services/catalog/ImageMetaListDocument.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
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
        enum class FetchState : uchar {
            Fetching          = 0,
            FailedAndCanRetry = 1,
            Failed            = 2,
            Success           = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 20, ::RetryDelay>                                               mRetryDelay;
        ::ll::TypedStorage<8, 32, ::std::string>                                              mActiveModelProductId;
        ::ll::TypedStorage<8, 192, ::CommonImage>                                             mImage;
        ::ll::TypedStorage<8, 24, ::ImageMetaListDocument>                                    mImageListDoc;
        ::ll::TypedStorage<1, 1, ::MinecoinCatalogModel::ActiveModelImageTracker::FetchState> mFetchState;
        ::ll::TypedStorage<4, 4, uint>                                                        mRefetchCount;
        // NOLINTEND
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecoinCatalogModel() /*override*/ = default;

    virtual ::OfferCatalogStatus update() /*override*/;

    virtual void fetchAllCoinOffers() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
