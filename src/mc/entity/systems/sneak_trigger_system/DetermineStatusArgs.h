#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SneakTriggerSystem {

struct DetermineStatusArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb427db;
    ::ll::UntypedStorage<8, 8> mUnk885b4b;
    ::ll::UntypedStorage<8, 8> mUnk640126;
    ::ll::UntypedStorage<1, 1> mUnk4e96f4;
    ::ll::UntypedStorage<4, 4> mUnkbfb252;
    ::ll::UntypedStorage<1, 1> mUnk2925f9;
    ::ll::UntypedStorage<1, 1> mUnkda7ba0;
    ::ll::UntypedStorage<8, 8> mUnk17ffb4;
    // NOLINTEND

public:
    // prevent constructor by default
    DetermineStatusArgs& operator=(DetermineStatusArgs const&);
    DetermineStatusArgs(DetermineStatusArgs const&);
    DetermineStatusArgs();
};

} // namespace SneakTriggerSystem
