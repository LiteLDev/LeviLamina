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
    // symbol:
    // ?thenExecute@GameTestSequence@gametest@@QEAAAEAV12@V?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI class gametest::GameTestSequence&
    thenExecute(std::function<std::optional<struct gametest::GameTestError>()> fn);

    // symbol:
    // ?thenExecuteAfter@GameTestSequence@gametest@@QEAAAEAV12@HV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI class gametest::GameTestSequence&
    thenExecuteAfter(int tickDelay, std::function<std::optional<struct gametest::GameTestError>()> fn);

    // symbol:
    // ?thenExecuteFor@GameTestSequence@gametest@@QEAAAEAV12@HV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI class gametest::GameTestSequence&
    thenExecuteFor(int, std::function<std::optional<struct gametest::GameTestError>()> fn);

    // symbol: ?thenFail@GameTestSequence@gametest@@QEAAXUGameTestError@2@@Z
    MCAPI void thenFail(struct gametest::GameTestError error);

    // symbol: ?thenIdle@GameTestSequence@gametest@@QEAAAEAV12@H@Z
    MCAPI class gametest::GameTestSequence& thenIdle(int tickDelay);

    // symbol: ?thenSucceed@GameTestSequence@gametest@@QEAAXXZ
    MCAPI void thenSucceed();

    // symbol:
    // ?thenWait@GameTestSequence@gametest@@QEAAAEAV12@V?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI class gametest::GameTestSequence& thenWait(std::function<std::optional<struct gametest::GameTestError>()> fn);

    // symbol:
    // ?thenWaitAfter@GameTestSequence@gametest@@QEAAAEAV12@HV?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI class gametest::GameTestSequence&
    thenWaitAfter(int tickDelay, std::function<std::optional<struct gametest::GameTestError>()> fn);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_executeWithoutFail@GameTestSequence@gametest@@AEAA?AV?$optional@UGameTestError@gametest@@@std@@AEBV34@@Z
    MCAPI std::optional<struct gametest::GameTestError>
          _executeWithoutFail(std::optional<struct gametest::GameTestError> const& error);

    // symbol: ?_tick@GameTestSequence@gametest@@AEAA?AV?$optional@UGameTestError@gametest@@@std@@H@Z
    MCAPI std::optional<struct gametest::GameTestError> _tick(int currentTick);

    // NOLINTEND
};

}; // namespace gametest
