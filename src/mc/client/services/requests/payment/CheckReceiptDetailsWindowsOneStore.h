#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetailsWindowsOneStore : public ::CheckReceiptDetails {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getPath() const /*override*/;

    virtual ::Json::Value toPostBody() const /*override*/;

    virtual void fromJsonResponse(::Json::Value const&) /*override*/;

    virtual ~CheckReceiptDetailsWindowsOneStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI char const* $getPath() const;

    MCNAPI ::Json::Value $toPostBody() const;

    MCNAPI void $fromJsonResponse(::Json::Value const&);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
