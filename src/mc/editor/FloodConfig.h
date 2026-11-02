#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct FloodConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkabfba7;
    ::ll::UntypedStorage<4, 12> mUnk4b8a0c;
    ::ll::UntypedStorage<4, 4>  mUnk58a3a4;
    ::ll::UntypedStorage<1, 1>  mUnk6575ba;
    ::ll::UntypedStorage<1, 1>  mUnk9f1d1d;
    ::ll::UntypedStorage<4, 32> mUnke4f710;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodConfig& operator=(FloodConfig const&);
    FloodConfig(FloodConfig const&);
    FloodConfig();
};

} // namespace Editor::InteractiveTools
