#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk21b924;
    ::ll::UntypedStorage<8, 64> mUnk1b7674;
    ::ll::UntypedStorage<8, 24> mUnkf9be2e;
    ::ll::UntypedStorage<8, 24> mUnk8d0a12;
    ::ll::UntypedStorage<8, 8>  mUnk62d7f4;
    ::ll::UntypedStorage<4, 4>  mUnke52d45;
    ::ll::UntypedStorage<8, 8>  mUnkd25d6d;
    ::ll::UntypedStorage<1, 1>  mUnk763143;
    ::ll::UntypedStorage<8, 16> mUnkfa4478;
    ::ll::UntypedStorage<8, 16> mUnk26cd31;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseGameTestBatchRunner() = default;

    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction&) = 0;

    virtual void _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance>, ::gametest::GameTestTicker&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forceStop();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
