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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StoreListenerMultistore() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StoreListenerMultistore() /*override*/;
#endif

    virtual void onQueryPurchasesSuccessMultistore(::std::string const&, ::std::vector<::PurchaseInfo> const&) = 0;

    virtual void onQueryPurchasesFailMultistore(::std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
