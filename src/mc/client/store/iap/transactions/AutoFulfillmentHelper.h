#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/transactions/TransactionStatus.h"

class AutoFulfillmentHelper {
public:
    // prevent constructor by default
    AutoFulfillmentHelper& operator=(AutoFulfillmentHelper const&);
    AutoFulfillmentHelper(AutoFulfillmentHelper const&);
    AutoFulfillmentHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutoFulfillmentHelper() = default;

    // vIndex: 1
    virtual void execute(::TransactionStatus);
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
