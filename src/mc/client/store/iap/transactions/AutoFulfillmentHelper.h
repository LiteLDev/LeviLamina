#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/iap/transactions/TransactionStatus.h"

class AutoFulfillmentHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutoFulfillmentHelper() = default;

    virtual void execute(::TransactionStatus);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $execute(::TransactionStatus);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
