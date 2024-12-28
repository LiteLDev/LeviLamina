#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsGooglePlayStore : public ::CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb2c342;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetailsGooglePlayStore& operator=(CheckReceiptDetailsGooglePlayStore const&);
    CheckReceiptDetailsGooglePlayStore(CheckReceiptDetailsGooglePlayStore const&);
    CheckReceiptDetailsGooglePlayStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 3
    virtual void fromJsonResponse(::Json::Value const&) /*override*/;

    // vIndex: 0
    virtual ~CheckReceiptDetailsGooglePlayStore() /*override*/;
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

    MCAPI void $fromJsonResponse(::Json::Value const&);
    // NOLINTEND
};
