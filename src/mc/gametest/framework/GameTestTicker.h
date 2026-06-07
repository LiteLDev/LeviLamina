#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameTestClearTask;
namespace gametest { class BaseGameTestBatchRunner; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestRuleHelper; }
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
    MCNAPI explicit GameTestTicker(::std::unique_ptr<::gametest::IGameTestRuleHelper> gameTestRuleHelper);

    MCNAPI void add(::std::unique_ptr<::GameTestClearTask> clearTask);

    MCNAPI void add(::std::shared_ptr<::gametest::BaseGameTestInstance> test);

    MCNAPI void add(::std::unique_ptr<::gametest::BaseGameTestBatchRunner> testBatchRunner);

    MCNAPI void cleanupGameRules();

    MCNAPI void clear();

#ifdef LL_PLAT_S
    MCNAPI bool empty() const;
#endif

    MCNAPI void forceStop();

    MCNAPI void tick();

    MCNAPI ~GameTestTicker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::gametest::IGameTestRuleHelper> gameTestRuleHelper);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace gametest
