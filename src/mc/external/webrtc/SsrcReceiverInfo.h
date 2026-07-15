#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcReceiverInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka6689c;
    ::ll::UntypedStorage<8, 8> mUnk8310bc;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcReceiverInfo& operator=(SsrcReceiverInfo const&);
    SsrcReceiverInfo(SsrcReceiverInfo const&);
    SsrcReceiverInfo();
};

} // namespace webrtc
