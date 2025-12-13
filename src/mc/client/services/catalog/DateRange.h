#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DateRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6b9d1c;
    ::ll::UntypedStorage<8, 32> mUnkc24e03;
    // NOLINTEND

public:
    // prevent constructor by default
    DateRange& operator=(DateRange const&);
    DateRange(DateRange const&);
    DateRange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~DateRange();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
