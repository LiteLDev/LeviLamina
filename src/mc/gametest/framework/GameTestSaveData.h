#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameTestSaveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkb98612;
    ::ll::UntypedStorage<4, 4>  mUnkbbbad2;
    ::ll::UntypedStorage<8, 32> mUnkdfd35e;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSaveData& operator=(GameTestSaveData const&);
    GameTestSaveData(GameTestSaveData const&);
    GameTestSaveData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GameTestSaveData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
