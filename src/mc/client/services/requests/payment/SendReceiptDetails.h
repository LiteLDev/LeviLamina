#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb2651b;
    ::ll::UntypedStorage<8, 32> mUnk3966dc;
    ::ll::UntypedStorage<8, 32> mUnk40b30b;
    ::ll::UntypedStorage<1, 1>  mUnk742aa2;
    // NOLINTEND

public:
    // prevent constructor by default
    SendReceiptDetails& operator=(SendReceiptDetails const&);
    SendReceiptDetails(SendReceiptDetails const&);
    SendReceiptDetails();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SendReceiptDetails() = default;
#else // LL_PLAT_C
    virtual ~SendReceiptDetails();
#endif

    virtual char const* getPath() const = 0;

    virtual ::Json::Value toPostBody() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _addCommonProperties(::Json::Value& commonBody) const;
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
