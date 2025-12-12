#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
struct ReceiptData_Apple;
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsAppleAppStore : public ::CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf0945a;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetailsAppleAppStore& operator=(CheckReceiptDetailsAppleAppStore const&);
    CheckReceiptDetailsAppleAppStore(CheckReceiptDetailsAppleAppStore const&);
    CheckReceiptDetailsAppleAppStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual void fromJsonResponse(::Json::Value const& jsonResponse) /*override*/;

    virtual ~CheckReceiptDetailsAppleAppStore() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CheckReceiptDetailsAppleAppStore(::std::vector<::ReceiptData_Apple> receiptsToCheck);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::vector<::ReceiptData_Apple> receiptsToCheck);
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
