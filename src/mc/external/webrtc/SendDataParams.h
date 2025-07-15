#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SendDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc6ff9f;
    ::ll::UntypedStorage<1, 1> mUnk24139a;
    ::ll::UntypedStorage<4, 8> mUnkca6ccf;
    ::ll::UntypedStorage<4, 8> mUnk55a426;
    // NOLINTEND

public:
    // prevent constructor by default
    SendDataParams& operator=(SendDataParams const&);
    SendDataParams(SendDataParams const&);
    SendDataParams();
};

} // namespace webrtc
