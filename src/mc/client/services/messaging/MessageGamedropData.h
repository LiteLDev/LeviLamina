#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MessageGamedropData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbc9f8c;
    ::ll::UntypedStorage<8, 32> mUnk9904d6;
    ::ll::UntypedStorage<8, 32> mUnk17be8c;
    ::ll::UntypedStorage<8, 32> mUnka2fd0e;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageGamedropData& operator=(MessageGamedropData const&);
    MessageGamedropData(MessageGamedropData const&);
    MessageGamedropData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::MessageGamedropData& operator=(::MessageGamedropData&&);

    MCNAPI_C ~MessageGamedropData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
