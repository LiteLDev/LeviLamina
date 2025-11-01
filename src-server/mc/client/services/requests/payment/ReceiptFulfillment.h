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
        ::ll::UntypedStorage<1, 1> mUnk26281f;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ReceiptData& operator=(ReceiptData const&);
        ReceiptData(ReceiptData const&);
        ReceiptData();
    
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

};
