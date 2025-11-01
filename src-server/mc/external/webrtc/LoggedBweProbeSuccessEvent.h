#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedBweProbeSuccessEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd508e3;
    ::ll::UntypedStorage<4, 4> mUnkc839b1;
    ::ll::UntypedStorage<4, 4> mUnk2acbe6;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedBweProbeSuccessEvent& operator=(LoggedBweProbeSuccessEvent const&);
    LoggedBweProbeSuccessEvent(LoggedBweProbeSuccessEvent const&);
    LoggedBweProbeSuccessEvent();

};

}
