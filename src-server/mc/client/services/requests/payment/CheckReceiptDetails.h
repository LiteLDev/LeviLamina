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
    ::ll::UntypedStorage<1, 1> mUnkd27346;
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
    // vIndex: 0
    virtual ~CheckReceiptDetails() = default;

    // vIndex: 1
    virtual char const* getPath() const = 0;

    // vIndex: 2
    virtual ::Json::Value toPostBody() const = 0;

    // vIndex: 3
    virtual void fromJsonResponse(::Json::Value const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
