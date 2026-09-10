#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct FramePacingStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf50a34;
    ::ll::UntypedStorage<8, 8> mUnkc42ca0;
    ::ll::UntypedStorage<8, 8> mUnkf824e0;
    // NOLINTEND

public:
    // prevent constructor by default
    FramePacingStatistics& operator=(FramePacingStatistics const&);
    FramePacingStatistics(FramePacingStatistics const&);
    FramePacingStatistics();
};

} // namespace dragon::platform
