#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameTestClearTask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk5c35f4;
    ::ll::UntypedStorage<8, 16> mUnkac810e;
    ::ll::UntypedStorage<1, 1>  mUnkf34dd1;
    ::ll::UntypedStorage<1, 1>  mUnk142d9b;
    ::ll::UntypedStorage<8, 96> mUnk4af5fa;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestClearTask& operator=(GameTestClearTask const&);
    GameTestClearTask(GameTestClearTask const&);
    GameTestClearTask();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tick();
    // NOLINTEND
};
