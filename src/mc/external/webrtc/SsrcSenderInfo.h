#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SsrcSenderInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5abb9c;
    ::ll::UntypedStorage<8, 8> mUnka7c396;
    // NOLINTEND

public:
    // prevent constructor by default
    SsrcSenderInfo& operator=(SsrcSenderInfo const&);
    SsrcSenderInfo(SsrcSenderInfo const&);
    SsrcSenderInfo();
};

} // namespace webrtc
