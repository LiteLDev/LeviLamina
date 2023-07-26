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
    // prevent constructor by default
    GameTestTicker& operator=(GameTestTicker const&) = delete;
    GameTestTicker(GameTestTicker const&)            = delete;
    GameTestTicker()                                 = delete;

public:
    /**
     * @symbol
     * ??0GameTestTicker\@gametest\@\@QEAA\@V?$unique_ptr\@VIGameTestRuleHelper\@gametest\@\@U?$default_delete\@VIGameTestRuleHelper\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI GameTestTicker(std::unique_ptr<class gametest::IGameTestRuleHelper>); // NOLINT
    /**
     * @symbol
     * ?add\@GameTestTicker\@gametest\@\@QEAAXV?$unique_ptr\@VBaseGameTestBatchRunner\@gametest\@\@U?$default_delete\@VBaseGameTestBatchRunner\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class gametest::BaseGameTestBatchRunner>); // NOLINT
    /**
     * @symbol ?add\@GameTestTicker\@gametest\@\@QEAAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void add(class std::shared_ptr<class gametest::BaseGameTestInstance>); // NOLINT
    /**
     * @symbol
     * ?add\@GameTestTicker\@gametest\@\@QEAAXV?$unique_ptr\@VGameTestClearTask\@\@U?$default_delete\@VGameTestClearTask\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(std::unique_ptr<class GameTestClearTask>); // NOLINT
    /**
     * @symbol ?cleanupGameRules\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void cleanupGameRules(); // NOLINT
    /**
     * @symbol ?clear\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?empty\@GameTestTicker\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT
    /**
     * @symbol ?forceStop\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void forceStop(); // NOLINT
    /**
     * @symbol ?tick\@GameTestTicker\@gametest\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ??1GameTestTicker\@gametest\@\@QEAA\@XZ
     */
    MCAPI ~GameTestTicker(); // NOLINT
};

}; // namespace gametest
