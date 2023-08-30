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
    // NOLINTBEGIN
    /**
     * @symbol
     * ?thenExecute\@GameTestSequence\@gametest\@\@QEAAAEAV12\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenExecute(std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?thenExecuteAfter\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenExecuteAfter(int32_t, std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?thenExecuteFor\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenExecuteFor(int32_t, std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol ?thenFail\@GameTestSequence\@gametest\@\@QEAAXUGameTestError\@2\@\@Z
     */
    MCAPI void thenFail(struct gametest::GameTestError);
    /**
     * @symbol ?thenIdle\@GameTestSequence\@gametest\@\@QEAAAEAV12\@H\@Z
     */
    MCAPI class gametest::GameTestSequence& thenIdle(int32_t);
    /**
     * @symbol ?thenSucceed\@GameTestSequence\@gametest\@\@QEAAXXZ
     */
    MCAPI void thenSucceed();
    /**
     * @symbol
     * ?thenWait\@GameTestSequence\@gametest\@\@QEAAAEAV12\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenWait(std::function<std::optional<struct gametest::GameTestError>(void)>);
    /**
     * @symbol
     * ?thenWaitAfter\@GameTestSequence\@gametest\@\@QEAAAEAV12\@HV?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI class gametest::GameTestSequence&
        thenWaitAfter(int32_t, std::function<std::optional<struct gametest::GameTestError>(void)>);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_executeWithoutFail\@GameTestSequence\@gametest\@\@AEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI std::optional<struct gametest::GameTestError>
          _executeWithoutFail(std::optional<struct gametest::GameTestError> const&);
    /**
     * @symbol ?_tick\@GameTestSequence\@gametest\@\@AEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@H\@Z
     */
    MCAPI std::optional<struct gametest::GameTestError> _tick(int32_t);
    // NOLINTEND
};

}; // namespace gametest
