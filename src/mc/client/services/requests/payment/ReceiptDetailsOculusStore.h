#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsOculusStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e974e;
    ::ll::UntypedStorage<8, 8>  mUnk4f7b7b;
    ::ll::UntypedStorage<8, 32> mUnke27e3b;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsOculusStore& operator=(ReceiptDetailsOculusStore const&);
    ReceiptDetailsOculusStore(ReceiptDetailsOculusStore const&);
    ReceiptDetailsOculusStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsOculusStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
