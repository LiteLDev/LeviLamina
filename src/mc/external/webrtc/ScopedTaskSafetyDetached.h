#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ScopedTaskSafetyDetached {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd5b706;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedTaskSafetyDetached& operator=(ScopedTaskSafetyDetached const&);
    ScopedTaskSafetyDetached(ScopedTaskSafetyDetached const&);
    ScopedTaskSafetyDetached();
};

} // namespace webrtc
