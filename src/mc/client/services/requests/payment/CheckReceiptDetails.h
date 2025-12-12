#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CheckReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd27346;
    ::ll::UntypedStorage<8, 24> mUnk90322f;
    // NOLINTEND

public:
    // prevent constructor by default
    CheckReceiptDetails& operator=(CheckReceiptDetails const&);
    CheckReceiptDetails(CheckReceiptDetails const&);
    CheckReceiptDetails();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~CheckReceiptDetails() = default;
#else // LL_PLAT_C
    virtual ~CheckReceiptDetails();
#endif

    virtual char const* getPath() const = 0;

    virtual ::Json::Value toPostBody() const = 0;

    virtual void fromJsonResponse(::Json::Value const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
