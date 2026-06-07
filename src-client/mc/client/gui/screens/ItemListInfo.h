#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/StoreCatalogCategory.h"

// auto generated forward declare list
// clang-format off
class StoreCatalogItem;
// clang-format on

struct ItemListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                    mTitle;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::StoreCatalogItem const&)>> mFilterFunction;
    ::ll::TypedStorage<1, 1, bool>                                              mAllowSeeMoreBy;
    ::ll::TypedStorage<4, 4, int>                                               mMaxOffersVisible;
    ::ll::TypedStorage<1, 1, bool>                                              mIsClientSideInventorySearchEnabled;
    ::ll::TypedStorage<4, 4, ::StoreCatalogCategory>                            mCatalogCategory;
    ::ll::TypedStorage<1, 1, bool>                                              mShowSalesCollection;
    ::ll::TypedStorage<1, 1, bool>                                              mHideNonSaleList;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSearchScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemListInfo& operator=(ItemListInfo const&);
    ItemListInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemListInfo(::ItemListInfo const&);

    MCAPI ItemListInfo(
        ::std::string const&                             title,
        ::std::function<bool(::StoreCatalogItem const&)> filterFunction,
        bool                                             allowSeeMoreBy,
        int                                              maxOffersVisible,
        bool                                             isClientSideInventorySearchEnabled,
        ::StoreCatalogCategory                           catelogCategory,
        bool                                             showSalesCollection,
        bool                                             hideNonSaleList
    );

    MCAPI ~ItemListInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemListInfo const&);

    MCAPI void* $ctor(
        ::std::string const&                             title,
        ::std::function<bool(::StoreCatalogItem const&)> filterFunction,
        bool                                             allowSeeMoreBy,
        int                                              maxOffersVisible,
        bool                                             isClientSideInventorySearchEnabled,
        ::StoreCatalogCategory                           catelogCategory,
        bool                                             showSalesCollection,
        bool                                             hideNonSaleList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
