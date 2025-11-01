#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NaluInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc3a57c;
    ::ll::UntypedStorage<4, 4> mUnk755a4f;
    ::ll::UntypedStorage<4, 4> mUnkb94d40;
    // NOLINTEND

public:
    // prevent constructor by default
    NaluInfo& operator=(NaluInfo const&);
    NaluInfo(NaluInfo const&);
    NaluInfo();

};

}
