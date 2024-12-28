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
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsGooglePlayStore() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getPath() const;

    MCAPI ::Json::Value $toPostBody() const;
    // NOLINTEND
};
