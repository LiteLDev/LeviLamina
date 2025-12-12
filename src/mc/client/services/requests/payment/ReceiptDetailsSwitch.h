#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsSwitch : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk41e0b0;
    ::ll::UntypedStorage<8, 32> mUnk550ba4;
    ::ll::UntypedStorage<8, 32> mUnkc4bcf0;
    ::ll::UntypedStorage<8, 32> mUnkb59575;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsSwitch& operator=(ReceiptDetailsSwitch const&);
    ReceiptDetailsSwitch(ReceiptDetailsSwitch const&);
    ReceiptDetailsSwitch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

#ifdef LL_PLAT_S
    virtual ~ReceiptDetailsSwitch() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ReceiptDetailsSwitch() /*override*/;
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
