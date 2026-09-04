#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestSaveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkb98612;
    ::ll::UntypedStorage<4, 4>  mUnk4553be;
    ::ll::UntypedStorage<8, 32> mUnkddb4d5;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&);
    GameTestSaveData(GameTestSaveData const&);
    GameTestSaveData();
};
