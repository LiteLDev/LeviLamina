#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LoggedBweProbeClusterCreatedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf4af13;
    ::ll::UntypedStorage<4, 4> mUnk6263fc;
    ::ll::UntypedStorage<4, 4> mUnk2ef18a;
    ::ll::UntypedStorage<4, 4> mUnkaabdc5;
    ::ll::UntypedStorage<4, 4> mUnkbd40f4;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggedBweProbeClusterCreatedEvent& operator=(LoggedBweProbeClusterCreatedEvent const&);
    LoggedBweProbeClusterCreatedEvent(LoggedBweProbeClusterCreatedEvent const&);
    LoggedBweProbeClusterCreatedEvent();

};

}
