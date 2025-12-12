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
    // vIndex: 0
    virtual ~TransactionHandler() = default;

    // vIndex: 1
    virtual void transactPurchase(::Offer&, ::TransactionContext&, ::PurchasePath);

    // vIndex: 2
    virtual bool tryParseTransactionPayload(::std::shared_ptr<::Purchase>&, ::std::string&) const;

    // vIndex: 3
    virtual void onPurchaseComplete(::Offer&, ::std::string const&, ::PurchasePath, ::PurchaseResult);

    // vIndex: 4
    virtual bool _transactFulfillment(::Offer&, ::std::shared_ptr<::Purchase>, ::PurchasePath) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
