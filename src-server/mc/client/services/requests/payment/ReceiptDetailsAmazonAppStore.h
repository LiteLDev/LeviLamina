#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/SendReceiptDetails.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ReceiptDetailsAmazonAppStore : public ::SendReceiptDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2acaf4;
    ::ll::UntypedStorage<8, 32> mUnk40088e;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptDetailsAmazonAppStore& operator=(ReceiptDetailsAmazonAppStore const&);
    ReceiptDetailsAmazonAppStore(ReceiptDetailsAmazonAppStore const&);
    ReceiptDetailsAmazonAppStore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 0
    virtual ~ReceiptDetailsAmazonAppStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
