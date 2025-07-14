#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedBweDelayBasedUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7894aa;
    ::ll::UntypedStorage<4, 4> mUnk574663;
    ::ll::UntypedStorage<4, 4> mUnk474617;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedBweDelayBasedUpdate& operator=(LoggedBweDelayBasedUpdate const&);
    LoggedBweDelayBasedUpdate(LoggedBweDelayBasedUpdate const&);
    LoggedBweDelayBasedUpdate();
};

} // namespace webrtc
