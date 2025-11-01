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

};

}
