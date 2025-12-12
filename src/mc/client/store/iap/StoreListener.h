#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ProductInfo;
struct ProductSku;
struct PurchaseInfo;
// clang-format on

class StoreListener {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StoreListener() = default;
#else // LL_PLAT_C
    virtual ~StoreListener();
#endif

    virtual void onStoreInitialized(bool) = 0;

    virtual void setStoreAvailable(bool) = 0;

    virtual void onQueryProductsSuccess(::std::vector<::ProductInfo> const&) = 0;

    virtual void onQueryProductsFail() = 0;

    virtual void onPurchaseSuccessful(::PurchaseInfo const&) = 0;

    virtual void onPurchaseCanceled(::ProductSku const&) = 0;

    virtual void onPurchaseFailed(::ProductSku const&) = 0;

    virtual void onPurchasePlatformStoreFailed(::ProductSku const&, ::std::string const&) = 0;

    virtual void onPurchasePending(::ProductSku const&) = 0;

    virtual void onQueryPurchasesSuccess(::std::vector<::PurchaseInfo> const&) = 0;

    virtual void onQueryPurchasesFail() = 0;

    virtual void onAppPurchaseSuccess() = 0;

    virtual void onAppPurchaseFailed() = 0;

    virtual void onAppPurchaseCanceled() = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
