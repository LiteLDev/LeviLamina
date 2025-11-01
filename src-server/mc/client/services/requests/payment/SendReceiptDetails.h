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
    ::ll::UntypedStorage<1, 1> mUnk742aa2;
    // NOLINTEND

public:
    // prevent constructor by default
    SendReceiptDetails& operator=(SendReceiptDetails const&);
    SendReceiptDetails(SendReceiptDetails const&);
    SendReceiptDetails();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendReceiptDetails() = default;

    // vIndex: 1
    virtual char const* getPath() const = 0;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
