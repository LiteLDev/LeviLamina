#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct IceRecheckEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk29f5fa;
    ::ll::UntypedStorage<4, 4> mUnk97edde;
    // NOLINTEND

public:
    // prevent constructor by default
    IceRecheckEvent& operator=(IceRecheckEvent const&);
    IceRecheckEvent(IceRecheckEvent const&);
    IceRecheckEvent();
};

} // namespace webrtc
