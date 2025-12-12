#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
struct ReceiptData_Google;
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
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual void fromJsonResponse(::Json::Value const& jsonResponse) /*override*/;

    virtual ~CheckReceiptDetailsGooglePlayStore() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CheckReceiptDetailsGooglePlayStore(::std::vector<::ReceiptData_Google> receiptsToCheck);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::vector<::ReceiptData_Google> receiptsToCheck);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI char const* $getPath() const;

    MCNAPI ::Json::Value $toPostBody() const;

    MCNAPI void $fromJsonResponse(::Json::Value const& jsonResponse);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
