#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/PurchaseResult.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"

// auto generated forward declare list
// clang-format off
class Offer;
class TransactionContext;
struct Purchase;
struct IGameStore;
// clang-format on

class TransactionHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3a6073;
    ::ll::UntypedStorage<8, 8> mUnk2a21a0;
    ::ll::UntypedStorage<8, 8> mUnk8a3e41;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionHandler& operator=(TransactionHandler const&);
    TransactionHandler(TransactionHandler const&);
    TransactionHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~TransactionHandler() = default;
#else // LL_PLAT_C
    virtual ~TransactionHandler();
#endif

    virtual void transactPurchase(::Offer& offer, ::TransactionContext& transactionContext, ::PurchasePath path);

    virtual bool tryParseTransactionPayload(::std::shared_ptr<::Purchase>&, ::std::string&) const;

    virtual void onPurchaseComplete(::Offer&, ::std::string const&, ::PurchasePath, ::PurchaseResult);

    virtual bool _transactFulfillment(::Offer&, ::std::shared_ptr<::Purchase>, ::PurchasePath) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit TransactionHandler(::IGameStore& gameStore);

    MCNAPI_C bool transactFulfillment(
        ::Offer&                                offer,
        ::std::shared_ptr<::Purchase>           purchase,
        ::std::unique_ptr<::TransactionContext> transactionContext,
        ::PurchasePath                          path
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void autoFulfillmentCallback(::TransactionContext* transactionContext, ::TransactionStatus status);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::IGameStore& gameStore);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $transactPurchase(::Offer& offer, ::TransactionContext& transactionContext, ::PurchasePath path);

    MCNAPI bool $tryParseTransactionPayload(::std::shared_ptr<::Purchase>&, ::std::string&) const;

    MCNAPI void $onPurchaseComplete(::Offer&, ::std::string const&, ::PurchasePath, ::PurchaseResult);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
