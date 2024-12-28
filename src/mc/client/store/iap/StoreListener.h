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
    // prevent constructor by default
    StoreListener& operator=(StoreListener const&);
    StoreListener(StoreListener const&);
    StoreListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreListener();

    // vIndex: 1
    virtual void onStoreInitialized(bool) = 0;

    // vIndex: 2
    virtual void setStoreAvailable(bool) = 0;

    // vIndex: 3
    virtual void onQueryProductsSuccess(::std::vector<::ProductInfo> const&) = 0;

    // vIndex: 4
    virtual void onQueryProductsFail() = 0;

    // vIndex: 5
    virtual void onPurchaseSuccessful(::PurchaseInfo const&) = 0;

    // vIndex: 6
    virtual void onPurchaseCanceled(::ProductSku const&) = 0;

    // vIndex: 7
    virtual void onPurchaseFailed(::ProductSku const&) = 0;

    // vIndex: 8
    virtual void onPurchasePending(::ProductSku const&) = 0;

    // vIndex: 9
    virtual void onQueryPurchasesSuccess(::std::vector<::PurchaseInfo> const&) = 0;

    // vIndex: 10
    virtual void onQueryPurchasesFail() = 0;

    // vIndex: 11
    virtual void onAppPurchaseSuccess() = 0;

    // vIndex: 12
    virtual void onAppPurchaseFailed() = 0;

    // vIndex: 13
    virtual void onAppPurchaseCanceled() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
