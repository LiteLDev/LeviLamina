#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct GamepadPoseState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk475777;
    ::ll::UntypedStorage<4, 12> mUnk4edf62;
    ::ll::UntypedStorage<4, 12> mUnk997105;
    ::ll::UntypedStorage<4, 16> mUnke2125e;
    ::ll::UntypedStorage<4, 12> mUnke2e8dd;
    ::ll::UntypedStorage<4, 12> mUnk676486;
    ::ll::UntypedStorage<1, 1>  mUnkc2f18c;
    ::ll::UntypedStorage<1, 1>  mUnk707350;
    ::ll::UntypedStorage<1, 1>  mUnke2a1a4;
    ::ll::UntypedStorage<1, 1>  mUnk6b93b8;
    // NOLINTEND

public:
    // prevent constructor by default
    GamepadPoseState& operator=(GamepadPoseState const&);
    GamepadPoseState(GamepadPoseState const&);
    GamepadPoseState();
};

} // namespace cohtml
