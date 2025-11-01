#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

struct ReceiveTimeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7ecceb;
    ::ll::UntypedStorage<4, 4> mUnk5fa55c;
    ::ll::UntypedStorage<4, 4> mUnk2065c7;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceiveTimeInfo& operator=(ReceiveTimeInfo const&);
    ReceiveTimeInfo(ReceiveTimeInfo const&);
    ReceiveTimeInfo();

};

}
