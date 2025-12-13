#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsOneStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5fcb62;
    ::ll::UntypedStorage<8, 32> mUnka6c024;
    ::ll::UntypedStorage<8, 32> mUnk445ebc;
    ::ll::UntypedStorage<8, 32> mUnk2e2294;
    ::ll::UntypedStorage<1, 1>  mUnkf0a0f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsOneStore& operator=(ReceiptDetailsOneStore const&);
    ReceiptDetailsOneStore(ReceiptDetailsOneStore const&);
    ReceiptDetailsOneStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsOneStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
