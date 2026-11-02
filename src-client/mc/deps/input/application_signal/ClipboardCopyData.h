#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

struct ClipboardCopyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClipboardCopyData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ApplicationSignal
