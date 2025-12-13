#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PurchaseReceiptPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk56791d;
    // NOLINTEND

public:
    // prevent constructor by default
    PurchaseReceiptPacketPayload& operator=(PurchaseReceiptPacketPayload const&);
    PurchaseReceiptPacketPayload(PurchaseReceiptPacketPayload const&);
    PurchaseReceiptPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PurchaseReceiptPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
