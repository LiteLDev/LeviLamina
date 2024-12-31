#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/StoreListener.h"

// auto generated forward declare list
// clang-format off
struct PurchaseInfo;
// clang-format on

class StoreListenerMultistore : public ::StoreListener {
public:
    // prevent constructor by default
    StoreListenerMultistore& operator=(StoreListenerMultistore const&);
    StoreListenerMultistore(StoreListenerMultistore const&);
    StoreListenerMultistore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreListenerMultistore() /*override*/ = default;

    // vIndex: 14
    virtual void onQueryPurchasesSuccessMultistore(::std::string const&, ::std::vector<::PurchaseInfo> const&) = 0;

    // vIndex: 15
    virtual void onQueryPurchasesFailMultistore(::std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
