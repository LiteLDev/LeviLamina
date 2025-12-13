#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsSonyStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkafd221;
    ::ll::UntypedStorage<8, 32> mUnk58d225;
    ::ll::UntypedStorage<8, 32> mUnkea2080;
    ::ll::UntypedStorage<8, 32> mUnk8b77e6;
    ::ll::UntypedStorage<8, 32> mUnk430ae5;
    ::ll::UntypedStorage<8, 32> mUnk4d479c;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsSonyStore& operator=(ReceiptDetailsSonyStore const&);
    ReceiptDetailsSonyStore(ReceiptDetailsSonyStore const&);
    ReceiptDetailsSonyStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~ReceiptDetailsSonyStore() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ReceiptDetailsSonyStore() /*override*/;
#endif

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
    MCNAPI char const* $getPath() const;

    MCNAPI ::Json::Value $toPostBody() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
