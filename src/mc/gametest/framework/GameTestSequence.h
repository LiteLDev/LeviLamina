#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class GameTestSequence {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk10d998;
    ::ll::UntypedStorage<8, 8>  mUnk8825e0;
    ::ll::UntypedStorage<8, 24> mUnk452f28;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTestSequence& operator=(GameTestSequence const&);
    GameTestSequence(GameTestSequence const&);
    GameTestSequence();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::gametest::GameTestError>
    _executeWithoutFail(::std::optional<::gametest::GameTestError> const& error);

    MCAPI ::std::optional<::gametest::GameTestError> _tick(int currentTick);

    MCAPI ::gametest::GameTestSequence& thenExecute(::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCAPI ::gametest::GameTestSequence&
    thenExecuteAfter(int tickDelay, ::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCAPI ::gametest::GameTestSequence&
    thenExecuteFor(int tickCount, ::std::function<::std::optional<::gametest::GameTestError>()> fn);

    MCAPI void thenFail(::gametest::GameTestError error);

    MCAPI void thenSucceed();

    MCAPI ::gametest::GameTestSequence&
    thenWaitAfter(int tickDelay, ::std::function<::std::optional<::gametest::GameTestError>()> fn);
    // NOLINTEND
};

} // namespace gametest
