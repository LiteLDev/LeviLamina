#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/catalog/reviews/RatingData.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

namespace World {

struct MarketplaceWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCreator;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mThumbnailPathBuffer;
    ::ll::TypedStorage<8, 40, ::RatingData>                      mRatingData;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSubscriptionStartDate;
    ::ll::TypedStorage<8, 32, ::std::string>                     mSubscriptionEndDate;
    ::ll::TypedStorage<1, 1, bool>                               mIsExpired;
    ::ll::TypedStorage<8, 32, ::std::string>                     mPackId;
    ::ll::TypedStorage<1, 1, bool>                               mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>                               mIsUpdateAvailable;
    ::ll::TypedStorage<4, 4, ::StoreCatalogCategory>             mStoreCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    MarketplaceWorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MarketplaceWorldTemplateData(::World::MarketplaceWorldTemplateData const&);

    MCAPI MarketplaceWorldTemplateData(::World::MarketplaceWorldTemplateData&&);

    MCAPI ::World::MarketplaceWorldTemplateData& operator=(::World::MarketplaceWorldTemplateData const&);

    MCAPI ~MarketplaceWorldTemplateData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::World::MarketplaceWorldTemplateData
    fromStoreCatalogItem(::StoreCatalogItem const& worldTemplateInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::MarketplaceWorldTemplateData const&);

    MCAPI void* $ctor(::World::MarketplaceWorldTemplateData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
