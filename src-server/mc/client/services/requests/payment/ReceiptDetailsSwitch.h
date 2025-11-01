#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsSwitch : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk41e0b0;
    ::ll::UntypedStorage<8, 32> mUnk550ba4;
    ::ll::UntypedStorage<8, 32> mUnkc4bcf0;
    ::ll::UntypedStorage<8, 32> mUnkb59575;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsSwitch& operator=(ReceiptDetailsSwitch const&);
    ReceiptDetailsSwitch(ReceiptDetailsSwitch const&);
    ReceiptDetailsSwitch();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsSwitch() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
