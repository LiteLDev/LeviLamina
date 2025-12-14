#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

struct ClipboardData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::wstring> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ~ClipboardData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};

} // namespace ApplicationSignal
