#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApplicationSignal {

struct ClipboardCopyData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86c375;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardCopyData& operator=(ClipboardCopyData const&);
    ClipboardCopyData(ClipboardCopyData const&);
    ClipboardCopyData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ClipboardCopyData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ApplicationSignal
