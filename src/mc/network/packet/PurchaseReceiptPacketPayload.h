#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PurchaseReceiptPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPurchaseReceipts;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PurchaseReceiptPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit PurchaseReceiptPacketPayload(::std::string const& receipt);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& receipt);
#endif
    // NOLINTEND
};
