#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReceiptFulfillment {
public:
    // ReceiptFulfillment inner types declare
    // clang-format off
    struct ReceiptData;
    // clang-format on

    // ReceiptFulfillment inner types define
    struct ReceiptData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 96> mUnk482e9b;
        ::ll::UntypedStorage<8, 64> mUnk7519b9;
        ::ll::UntypedStorage<8, 64> mUnk3caae9;
        ::ll::UntypedStorage<1, 1>  mUnk26281f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReceiptData& operator=(ReceiptData const&);
        ReceiptData(ReceiptData const&);
        ReceiptData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ReceiptData(::ReceiptFulfillment::ReceiptData&&);

        MCNAPI_C ~ReceiptData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::ReceiptFulfillment::ReceiptData&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfceb4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptFulfillment& operator=(ReceiptFulfillment const&);
    ReceiptFulfillment(ReceiptFulfillment const&);
    ReceiptFulfillment();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ReceiptFulfillment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
