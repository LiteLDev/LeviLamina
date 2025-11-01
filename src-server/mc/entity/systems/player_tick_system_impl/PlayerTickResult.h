#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {

struct PlayerTickResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk758b71;
    ::ll::UntypedStorage<1, 1> mUnk3753b7;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickResult& operator=(PlayerTickResult const&);
    PlayerTickResult(PlayerTickResult const&);
    PlayerTickResult();
};

} // namespace PlayerTickSystemImpl
