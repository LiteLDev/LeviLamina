#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickSystemImpl {

struct PlayerTickResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7c089f;
    ::ll::UntypedStorage<1, 1> mUnk3753b7;
    ::ll::UntypedStorage<8, 8> mUnk9e7f12;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickResult& operator=(PlayerTickResult const&);
    PlayerTickResult(PlayerTickResult const&);
    PlayerTickResult();
};

} // namespace PlayerTickSystemImpl
