#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReceiptData_Sony {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2be27d;
    ::ll::UntypedStorage<8, 32> mUnk598676;
    ::ll::UntypedStorage<8, 32> mUnk102b06;
    ::ll::UntypedStorage<8, 32> mUnkf0efbb;
    ::ll::UntypedStorage<8, 32> mUnk75aaa0;
    ::ll::UntypedStorage<8, 32> mUnke44158;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiptData_Sony& operator=(ReceiptData_Sony const&);
    ReceiptData_Sony(ReceiptData_Sony const&);
    ReceiptData_Sony();

};
