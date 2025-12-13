#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsAppleAppStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke69757;
    ::ll::UntypedStorage<8, 32> mUnk10651c;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsAppleAppStore& operator=(ReceiptDetailsAppleAppStore const&);
    ReceiptDetailsAppleAppStore(ReceiptDetailsAppleAppStore const&);
    ReceiptDetailsAppleAppStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsAppleAppStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
