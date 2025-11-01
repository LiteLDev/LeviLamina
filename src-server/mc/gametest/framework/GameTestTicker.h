#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

class GameTestTicker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk584414;
    ::ll::UntypedStorage<8, 24> mUnkf3f9fa;
    ::ll::UntypedStorage<8, 24> mUnk2cc6b4;
    ::ll::UntypedStorage<8, 24> mUnkadb620;
    ::ll::UntypedStorage<8, 8> mUnke09f0e;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&);
    GameTestTicker(GameTestTicker const&);
    GameTestTicker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI void forceStop();

    MCNAPI void tick();
    // NOLINTEND

};

}
