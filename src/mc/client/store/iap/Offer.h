#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/Fulfillment.h"
#include "mc/client/store/iap/PurchasePath.h"

// auto generated forward declare list
// clang-format off
class TransactionContext;
class TransactionHandler;
struct ProductInfo;
struct Purchase;
struct PurchaseInfo;
// clang-format on

class Offer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8961a;
    ::ll::UntypedStorage<4, 4>  mUnk6874ca;
    ::ll::UntypedStorage<4, 4>  mUnkedf968;
    ::ll::UntypedStorage<8, 8>  mUnke5d89c;
    ::ll::UntypedStorage<8, 24> mUnk7bf308;
    ::ll::UntypedStorage<8, 80> mUnk75f640;
    // NOLINTEND

public:
    // prevent constructor by default
    Offer& operator=(Offer const&);
    Offer(Offer const&);
    Offer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::weak_ptr<::Purchase> addPurchase(::PurchaseInfo const& purchaseInfo, ::Fulfillment fulfillment);

    MCNAPI_C void fulfillPurchase(::std::shared_ptr<::Purchase> purchase, ::Fulfillment fulfillment);

    MCNAPI_C ::std::vector<::std::weak_ptr<::Purchase>> getAllPurchases() const;

    MCNAPI_C ::std::weak_ptr<::Purchase> getNextUnfulfilledPurchase();

    MCNAPI_C ::std::vector<::std::weak_ptr<::Purchase>> getUnknownPurchases() const;

    MCNAPI_C bool hasActivePurchaseHistory() const;

    MCNAPI_C void setProductInfo(::ProductInfo const& productInfo);

    MCNAPI_C bool transactFulfillment(
        ::TransactionHandler&                   handler,
        ::std::shared_ptr<::Purchase>           purchase,
        ::std::unique_ptr<::TransactionContext> context,
        ::PurchasePath                          path
    );
    // NOLINTEND
};
