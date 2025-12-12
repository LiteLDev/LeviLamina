#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsOneStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5fcb62;
    ::ll::UntypedStorage<8, 32> mUnka6c024;
    ::ll::UntypedStorage<8, 32> mUnk445ebc;
    ::ll::UntypedStorage<8, 32> mUnk2e2294;
    ::ll::UntypedStorage<1, 1>  mUnkf0a0f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsOneStore& operator=(ReceiptDetailsOneStore const&);
    ReceiptDetailsOneStore(ReceiptDetailsOneStore const&);
    ReceiptDetailsOneStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~ReceiptDetailsOneStore() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ReceiptDetailsOneStore() /*override*/;
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
