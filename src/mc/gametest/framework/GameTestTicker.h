#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
// clang-format on

namespace gametest {

class GameTestTicker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk584414;
    ::ll::UntypedStorage<8, 24> mUnkb5b85a;
    ::ll::UntypedStorage<8, 24> mUnk34e059;
    ::ll::UntypedStorage<8, 24> mUnk1967c1;
    ::ll::UntypedStorage<8, 8>  mUnkc6363b;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&);
    GameTestTicker(GameTestTicker const&);
    GameTestTicker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::std::unique_ptr<::GameTestClearTask> clearTask);

    MCNAPI void clear();

    MCNAPI void forceStop();

    MCNAPI void tick();
    // NOLINTEND
};

} // namespace gametest
