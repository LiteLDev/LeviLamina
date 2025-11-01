#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedBweLossBasedUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd3a162;
    ::ll::UntypedStorage<4, 4> mUnk7ded60;
    ::ll::UntypedStorage<1, 1> mUnke8a0c7;
    ::ll::UntypedStorage<4, 4> mUnka47ffa;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedBweLossBasedUpdate& operator=(LoggedBweLossBasedUpdate const&);
    LoggedBweLossBasedUpdate(LoggedBweLossBasedUpdate const&);
    LoggedBweLossBasedUpdate();

};

}
