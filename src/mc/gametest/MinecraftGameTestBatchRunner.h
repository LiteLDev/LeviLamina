#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestBatchRunner.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestTicker; }
// clang-format on

class MinecraftGameTestBatchRunner : public ::gametest::BaseGameTestBatchRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3b72dd;
    ::ll::UntypedStorage<8, 8> mUnk637ef7;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestBatchRunner& operator=(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner(MinecraftGameTestBatchRunner const&);
    MinecraftGameTestBatchRunner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTestBatchRunner() /*override*/ = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::gametest::BaseGameTestInstance>
    _createGameTestInstance(::gametest::BaseGameTestFunction& function) /*override*/;

    // vIndex: 2
    virtual void
    _runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::gametest::BaseGameTestInstance>
    $_createGameTestInstance(::gametest::BaseGameTestFunction& function);

    MCNAPI void $_runTest(::std::shared_ptr<::gametest::BaseGameTestInstance> test, ::gametest::GameTestTicker& ticker);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
