#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsGooglePlayStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk81f021;
    ::ll::UntypedStorage<8, 32> mUnk746cad;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsGooglePlayStore& operator=(ReceiptDetailsGooglePlayStore const&);
    ReceiptDetailsGooglePlayStore(ReceiptDetailsGooglePlayStore const&);
    ReceiptDetailsGooglePlayStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual ~ReceiptDetailsGooglePlayStore() /*override*/ = default;
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
