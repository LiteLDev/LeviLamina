#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
struct ReceiptData_Amazon;
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsAmazonAppStore : public ::CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4e32d0;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetailsAmazonAppStore& operator=(CheckReceiptDetailsAmazonAppStore const&);
    CheckReceiptDetailsAmazonAppStore(CheckReceiptDetailsAmazonAppStore const&);
    CheckReceiptDetailsAmazonAppStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual void fromJsonResponse(::Json::Value const& jsonResponse) /*override*/;

    virtual ~CheckReceiptDetailsAmazonAppStore() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit CheckReceiptDetailsAmazonAppStore(::std::vector<::ReceiptData_Amazon> receiptsToCheck);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::vector<::ReceiptData_Amazon> receiptsToCheck);
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
