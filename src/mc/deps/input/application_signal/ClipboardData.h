#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

struct ClipboardData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk75cb42;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardData& operator=(ClipboardData const&);
    ClipboardData(ClipboardData const&);
    ClipboardData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ClipboardData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ApplicationSignal
