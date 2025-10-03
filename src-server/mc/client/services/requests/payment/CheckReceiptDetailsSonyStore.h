#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/requests/payment/CheckReceiptDetails.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 1
    virtual char const* getPath() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const /*override*/;

    // vIndex: 3
    virtual void fromJsonResponse(::Json::Value const&) /*override*/;

    // vIndex: 0
    virtual ~CheckReceiptDetailsSonyStore() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
