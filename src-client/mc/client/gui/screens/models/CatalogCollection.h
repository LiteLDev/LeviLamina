#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
struct ContentCatalogService;
struct IEntitlementManager;
struct SearchQuery;
struct StoreCatalogItem;
struct StoreCatalogRepository;
struct StoreSearchQuery;
// clang-format on

class CatalogCollection {
public:
    // CatalogCollection inner types declare
    // clang-format off
    struct CatalogCollectionListener;
    struct QueryContentInfo;
    // clang-format on

    // CatalogCollection inner types define
    struct CatalogCollectionListener {};

    struct QueryContentInfo {};

    using NoItemsFoundCallback = ::std::function<void()>;

    using ItemsFoundCallback = ::std::function<void(int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StoreCatalogRepository&>                               mStoreCatalog;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>> mContentCatalogService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>   mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::StoreCatalogItem&>                                     mInvalidItem;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                                mExistenceTracker;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CatalogCollection::CatalogCollectionListener>>
                                                                                    mEntitlementChangeListener;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                           mAllItemsFoundCallback;
    ::ll::TypedStorage<8, 8, int64>                                                 mSaleExpirationTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::StoreCatalogItem*>>>  mContents;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                  mContentProductIds;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::StoreCatalogItem const&)>>     mFilterOutIfTrue;
    ::ll::TypedStorage<4, 4, int>                                                   mItemLimit;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::SearchQuery>>>      mQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::CatalogCollection::QueryContentInfo>> mContentCountPerQuery;
    ::ll::TypedStorage<1, 1, bool>                                                  mFetchingItems;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasUpcomingSale;
    ::ll::TypedStorage<1, 1, bool>                                                  mFilterOwnedToBack;
    ::ll::TypedStorage<1, 1, bool>                                                  mFilterOutInvalidOffers;
    ::ll::TypedStorage<1, 1, bool>                                                  mClientSortEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                  mTotalNumberOffersSent;
    ::ll::TypedStorage<1, 1, bool>                                                  mSent;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsPromoRow;
    ::ll::TypedStorage<1, 1, bool>                                                  mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                  mReady;
    ::ll::TypedStorage<4, 4, int>                                                   mQueryIndex;
    ::ll::TypedStorage<4, 4, int>                                                   mContentFetchLimit;
    ::ll::TypedStorage<4, 4, int>                                                   mVisibleItemsPerPage;
    ::ll::TypedStorage<4, 4, int>                                                   mFirstVisibleItemIndex;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                          mContentCheck;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogCollection& operator=(CatalogCollection const&);
    CatalogCollection(CatalogCollection const&);
    CatalogCollection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogCollection();

    virtual void updateItems(::std::function<void()> noItemsCallback, ::std::function<void(int)> itemsFoundCallback);

    virtual void setFilterOwnedToBack(bool const filterOwnedToBack);

    virtual ::StoreCatalogItem& getItem(int itemIndex);

    virtual ::StoreCatalogItem const& getItem(int itemIndex) const;

    virtual void setItemLimit(uint itemLimit);

    virtual void setAllItemsFoundCallback(::std::function<void(int)> itemsFoundCallback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CatalogCollection(
        ::StoreCatalogRepository&                                     storeCatalogRepo,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>          entMgr,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& contentCatalogService,
        ::std::vector<::std::shared_ptr<::SearchQuery>> const&        queries,
        int                                                           maxOffersVisible
    );

    MCAPI void
    _addItemsFromQuery(::std::function<void()> noItemsCallback, ::std::function<void(int)> itemsFoundCallback);

    MCAPI void _fetchItemImages(::gsl::not_null<::StoreCatalogItem*> item, bool isFirstOffer);

    MCAPI void _filterOwnedToBack(::std::vector<::gsl::not_null<::StoreCatalogItem*>>& items) const;

    MCAPI void _getTotalNumberOfOffers(::std::function<void(int)> itemsFoundCallback, int firstQueryPossibleCount);

    MCAPI void _resetQueryContentCount();

    MCAPI void _sortItems(::std::vector<::gsl::not_null<::StoreCatalogItem*>>& items, int index);

    MCAPI ::StoreSearchQuery& getQuery();

    MCAPI void setFilterOutIfTrue(::std::function<bool(::StoreCatalogItem const&)> filterFunction);

    MCAPI void setQuery(::StoreSearchQuery const& query);

    MCAPI void updateItemsFromQuery(
        ::std::vector<::std::shared_ptr<::SearchQuery>> const& queries,
        ::std::function<void()>                                noItemsCallback,
        ::std::function<void(int)>                             itemsFoundCallback
    );

    MCAPI void updateItemsFromQuery(
        ::StoreSearchQuery const&  query,
        ::std::function<void()>    noItemsCallback,
        ::std::function<void(int)> itemsFoundCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::StoreCatalogRepository&                                     storeCatalogRepo,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>          entMgr,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& contentCatalogService,
        ::std::vector<::std::shared_ptr<::SearchQuery>> const&        queries,
        int                                                           maxOffersVisible
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
    MCAPI void $updateItems(::std::function<void()> noItemsCallback, ::std::function<void(int)> itemsFoundCallback);

    MCAPI void $setFilterOwnedToBack(bool const filterOwnedToBack);

    MCFOLD ::StoreCatalogItem& $getItem(int itemIndex);

    MCFOLD ::StoreCatalogItem const& $getItem(int itemIndex) const;

    MCFOLD void $setItemLimit(uint itemLimit);

    MCAPI void $setAllItemsFoundCallback(::std::function<void(int)> itemsFoundCallback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
