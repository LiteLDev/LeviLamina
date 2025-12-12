#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
struct ReceiptData_Sony;
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsSonyStore : public ::CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk859c38;
    ::ll::UntypedStorage<8, 32> mUnk9720f8;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetailsSonyStore& operator=(CheckReceiptDetailsSonyStore const&);
    CheckReceiptDetailsSonyStore(CheckReceiptDetailsSonyStore const&);
    CheckReceiptDetailsSonyStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual void fromJsonResponse(::Json::Value const& jsonResponse) /*override*/;

#ifdef LL_PLAT_S
    virtual ~CheckReceiptDetailsSonyStore() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~CheckReceiptDetailsSonyStore() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CheckReceiptDetailsSonyStore(
        ::std::vector<::ReceiptData_Sony> receiptsToCheck,
        ::std::string const&              defaultWorldName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::vector<::ReceiptData_Sony> receiptsToCheck, ::std::string const& defaultWorldName);
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

    MCNAPI void $fromJsonResponse(::Json::Value const& jsonResponse);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
