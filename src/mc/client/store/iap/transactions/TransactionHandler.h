#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/PurchaseResult.h"

// auto generated forward declare list
// clang-format off
class Offer;
class TransactionContext;
struct Purchase;
// clang-format on

class TransactionHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3a6073;
    ::ll::UntypedStorage<8, 8> mUnk731764;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionHandler& operator=(TransactionHandler const&);
    TransactionHandler(TransactionHandler const&);
    TransactionHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransactionHandler();

    // vIndex: 1
    virtual void update();

    // vIndex: 2
    virtual void transactPurchase(::Offer&, ::TransactionContext&, ::PurchasePath);

    // vIndex: 3
    virtual bool transactFulfillment(
        ::Offer&,
        ::std::shared_ptr<::Purchase>,
        ::std::unique_ptr<::TransactionContext>,
        ::PurchasePath
    ) = 0;

    // vIndex: 4
    virtual bool tryParseTransactionPayload(::std::shared_ptr<::Purchase>&, ::std::string&) const;

    // vIndex: 5
    virtual void onPurchaseComplete(::Offer&, ::std::string const&, ::PurchasePath, ::PurchaseResult);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();

    MCAPI void $transactPurchase(::Offer&, ::TransactionContext&, ::PurchasePath);

    MCAPI bool $tryParseTransactionPayload(::std::shared_ptr<::Purchase>&, ::std::string&) const;

    MCAPI void $onPurchaseComplete(::Offer&, ::std::string const&, ::PurchasePath, ::PurchaseResult);
    // NOLINTEND
};
