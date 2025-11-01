#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FecProtectionParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9543e8;
    ::ll::UntypedStorage<4, 4> mUnkd8071a;
    ::ll::UntypedStorage<4, 4> mUnkbd1caa;
    // NOLINTEND

public:
    // prevent constructor by default
    FecProtectionParams& operator=(FecProtectionParams const&);
    FecProtectionParams(FecProtectionParams const&);
    FecProtectionParams();

};

}
