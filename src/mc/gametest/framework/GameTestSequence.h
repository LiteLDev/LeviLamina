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
    GameTestSequence& operator=(GameTestSequence const&) = delete;
    GameTestSequence(GameTestSequence const&)            = delete;
    GameTestSequence()                                   = delete;

public:
    /**
     * @symbol
     * ?thenExecute\@GameTestSequence\@gametest\@\@QEAAAEAV12\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenExecute(class std::function<class std::optional<struct gametest::GameTestError>(void)>); // NOLINT
    /**
     * @symbol
     * ?thenExecuteAfter\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
    thenExecuteAfter(int, class std::function<class std::optional<struct gametest::GameTestError>(void)>); // NOLINT
    /**
     * @symbol
     * ?thenExecuteFor\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
    thenExecuteFor(int, class std::function<class std::optional<struct gametest::GameTestError>(void)>); // NOLINT
    /**
     * @symbol ?thenFail\@GameTestSequence\@gametest\@\@QEAAXUGameTestError\@2\@\@Z
     */
    MCAPI void thenFail(struct gametest::GameTestError); // NOLINT
    /**
     * @symbol ?thenIdle\@GameTestSequence\@gametest\@\@QEAAAEAV12\@H\@Z
     */
    MCAPI class gametest::GameTestSequence& thenIdle(int); // NOLINT
    /**
     * @symbol ?thenSucceed\@GameTestSequence\@gametest\@\@QEAAXXZ
     */
    MCAPI void thenSucceed(); // NOLINT
    /**
     * @symbol
     * ?thenWait\@GameTestSequence\@gametest\@\@QEAAAEAV12\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenWait(class std::function<class std::optional<struct gametest::GameTestError>(void)>); // NOLINT
    /**
     * @symbol
     * ?thenWaitAfter\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
    thenWaitAfter(int, class std::function<class std::optional<struct gametest::GameTestError>(void)>); // NOLINT

    // private:
    /**
     * @symbol
     * ?_executeWithoutFail\@GameTestSequence\@gametest\@\@AEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError>
    _executeWithoutFail(class std::optional<struct gametest::GameTestError> const&); // NOLINT
    /**
     * @symbol ?_tick\@GameTestSequence\@gametest\@\@AEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@H\@Z
     */
    MCAPI class std::optional<struct gametest::GameTestError> _tick(int); // NOLINT

private:
};

}; // namespace gametest
