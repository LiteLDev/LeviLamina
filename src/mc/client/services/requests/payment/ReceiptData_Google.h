#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReceiptData_Google {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk327c7f;
    ::ll::UntypedStorage<8, 32> mUnk2d1e33;
    ::ll::UntypedStorage<8, 32> mUnkf465c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Google& operator=(ReceiptData_Google const&);
    ReceiptData_Google(ReceiptData_Google const&);
    ReceiptData_Google();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ReceiptData_Google();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
