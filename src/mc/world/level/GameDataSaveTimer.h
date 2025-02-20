#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameDataSaveTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc691c4;
    ::ll::UntypedStorage<8, 8>  mUnk4b0009;
    ::ll::UntypedStorage<8, 8>  mUnk2d9edd;
    ::ll::UntypedStorage<8, 16> mUnk88c27e;
    ::ll::UntypedStorage<1, 1>  mUnk55e648;
    // NOLINTEND

public:
    // prevent constructor by default
    GameDataSaveTimer& operator=(GameDataSaveTimer const&);
    GameDataSaveTimer(GameDataSaveTimer const&);
    GameDataSaveTimer();
};
