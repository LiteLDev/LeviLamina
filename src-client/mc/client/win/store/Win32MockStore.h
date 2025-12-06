#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/ProductType.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/PurchaseResult.h"
#include "mc/client/store/iap/Store.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"

// auto generated forward declare list
// clang-format off
struct ProductSku;
struct PurchaseInfo;
// clang-format on

class Win32MockStore : public ::Store {
public:
    // Win32MockStore inner types declare
    // clang-format off
    struct InternalPurchase;
    // clang-format on

    // Win32MockStore inner types define
    struct InternalPurchase {
    public:
        // InternalPurchase inner types define
        enum class Status : int {
            Pending      = 0,
            Acknowledged = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk86dcc7;
        ::ll::UntypedStorage<4, 4>   mUnk421ecc;
        // NOLINTEND

    public:
        // prevent constructor by default
        InternalPurchase& operator=(InternalPurchase const&);
        InternalPurchase(InternalPurchase const&);
        InternalPurchase();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2788d2;
    ::ll::UntypedStorage<8, 32> mUnkc2c234;
    ::ll::UntypedStorage<8, 8>  mUnk84cdfb;
    ::ll::UntypedStorage<8, 8>  mUnk32c2ad;
    // NOLINTEND

public:
    // prevent constructor by default
    Win32MockStore& operator=(Win32MockStore const&);
    Win32MockStore(Win32MockStore const&);
    Win32MockStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool requiresRestorePurchasesButton() const /*override*/;

    // vIndex: 4
    virtual bool allowsSubscriptions() const /*override*/;

    // vIndex: 5
    virtual ::std::string getStoreId() const /*override*/;

    // vIndex: 7
    virtual ::std::string getProductSkuPrefix() const /*override*/;

    // vIndex: 10
    virtual void queryProducts(::std::vector<::ProductSku> const&) /*override*/;

    // vIndex: 11
    virtual ::PurchaseResult
    purchase(::ProductSku const&, ::ProductType, ::std::string const&, ::PurchasePath) /*override*/;

    // vIndex: 12
    virtual void acknowledgePurchase(::PurchaseInfo const&, ::ProductType) /*override*/;

    // vIndex: 13
    virtual void queryPurchases(bool) /*override*/;

    // vIndex: 14
    virtual void restorePurchases() /*override*/;

    // vIndex: 15
    virtual bool isTrial() const /*override*/;

    // vIndex: 16
    virtual void purchaseGame(::TrialUpgradePurchaseTier const tier) /*override*/;

    // vIndex: 19
    virtual bool isGameLicensed() const /*override*/;

    // vIndex: 25
    virtual void registerLicenseChangeCallback(::std::function<void()>) /*override*/;

    // vIndex: 26
    virtual void handleLicenseChange() /*override*/;

    // vIndex: 23
    virtual ::std::string getAppReceipt() const /*override*/;

    // vIndex: 42
    virtual ::std::string getPriceForCaymanOffer(::std::string const&, ::std::string const&) const /*override*/;

    // vIndex: 0
    virtual ~Win32MockStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
