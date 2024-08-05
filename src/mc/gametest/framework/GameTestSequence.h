#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class GameTestSequence {
public:
    // prevent constructor by default
    GameTestSequence& operator=(GameTestSequence const&);
    GameTestSequence(GameTestSequence const&);
    GameTestSequence();

public:
    // NOLINTBEGIN
    MCAPI class gametest::GameTestSequence&
    thenExecute(std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI class gametest::GameTestSequence&
    thenExecuteAfter(int tickDelay, std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI class gametest::GameTestSequence&
    thenExecuteFor(int, std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI void thenFail(struct gametest::GameTestError error);

    MCAPI class gametest::GameTestSequence& thenIdle(int tickDelay);

    MCAPI void thenSucceed();

    MCAPI class gametest::GameTestSequence& thenWait(std::function<std::optional<struct gametest::GameTestError>()> fn);

    MCAPI class gametest::GameTestSequence&
    thenWaitAfter(int tickDelay, std::function<std::optional<struct gametest::GameTestError>()> fn);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct gametest::GameTestError>
          _executeWithoutFail(std::optional<struct gametest::GameTestError> const& error);

    MCAPI std::optional<struct gametest::GameTestError> _tick(int currentTick);

    // NOLINTEND
};

}; // namespace gametest
