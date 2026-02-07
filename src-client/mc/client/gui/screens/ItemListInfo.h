#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/StoreCatalogCategory.h"

// auto generated forward declare list
// clang-format off
struct StoreCatalogItem;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemListInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
