#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct H264ProfileLevelId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk64dc82;
    ::ll::UntypedStorage<4, 4> mUnk9fab07;
    // NOLINTEND

public:
    // prevent constructor by default
    H264ProfileLevelId& operator=(H264ProfileLevelId const&);
    H264ProfileLevelId(H264ProfileLevelId const&);
    H264ProfileLevelId();

};

}
