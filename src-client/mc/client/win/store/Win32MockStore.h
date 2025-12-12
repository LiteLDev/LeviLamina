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
    virtual bool requiresRestorePurchasesButton() const /*override*/;

    virtual bool allowsSubscriptions() const /*override*/;

    virtual ::std::string getStoreId() const /*override*/;

    virtual ::std::string getProductSkuPrefix() const /*override*/;

    virtual void queryProducts(::std::vector<::ProductSku> const&) /*override*/;

    virtual ::PurchaseResult
    purchase(::ProductSku const&, ::ProductType, ::std::string const&, ::PurchasePath) /*override*/;

    virtual void acknowledgePurchase(::PurchaseInfo const&, ::ProductType) /*override*/;

    virtual void queryPurchases(bool) /*override*/;

    virtual void restorePurchases() /*override*/;

    virtual bool isTrial() const /*override*/;

    virtual void purchaseGame(::TrialUpgradePurchaseTier const tier) /*override*/;

    virtual bool isGameLicensed() const /*override*/;

    virtual void registerLicenseChangeCallback(::std::function<void()>) /*override*/;

    virtual void handleLicenseChange() /*override*/;

    virtual ::std::string getAppReceipt() const /*override*/;

    virtual ::std::string getPriceForCaymanOffer(::std::string const&, ::std::string const&) const /*override*/;

    virtual ~Win32MockStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
