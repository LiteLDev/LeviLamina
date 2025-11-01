#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PurchaseReceiptPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPurchaseReceipts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PurchaseReceiptPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
