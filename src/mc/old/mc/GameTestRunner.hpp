/**
 * @file  GameTestRunner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GameTestRunner.
 *
 */
class GameTestRunner {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETESTRUNNER
public:
    class GameTestRunner& operator=(class GameTestRunner const &) = delete;
    GameTestRunner(class GameTestRunner const &) = delete;
    GameTestRunner() = delete;
#endif

public:
    /**
     * @symbol  ?clearAllTests\@GameTestRunner\@\@SAXAEAVBlockSource\@\@AEAVGameTestTicker\@gametest\@\@AEBV?$vector\@VBoundingBox\@\@V?$allocator\@VBoundingBox\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void clearAllTests(class BlockSource &, class gametest::GameTestTicker &, std::vector<class BoundingBox> const &);
    /**
     * @symbol  ?clearMarkers\@GameTestRunner\@\@SAXAEAVLevel\@\@\@Z
     */
    MCAPI static void clearMarkers(class Level &);
    /**
     * @symbol  ?groupTestsIntoBatches\@GameTestRunner\@\@SA?AV?$vector\@VGameTestBatch\@gametest\@\@V?$allocator\@VGameTestBatch\@gametest\@\@\@std\@\@\@std\@\@AEAVGameTestRegistry\@gametest\@\@AEBV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@3\@H\@Z
     */
    MCAPI static std::vector<class gametest::GameTestBatch> groupTestsIntoBatches(class gametest::GameTestRegistry &, std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>> const &, int);
    /**
     * @symbol  ?runTest\@GameTestRunner\@\@SAXV?$shared_ptr\@VBaseGameTestInstance\@gametest\@\@\@std\@\@AEAVGameTestTicker\@gametest\@\@\@Z
     */
    MCAPI static void runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker &);
    /**
     * @symbol  ?runTests\@GameTestRunner\@\@SA?AV?$unique_ptr\@VBaseGameTestBatchRunner\@gametest\@\@U?$default_delete\@VBaseGameTestBatchRunner\@gametest\@\@\@std\@\@\@std\@\@AEAVDimension\@\@AEAVGameTestRegistry\@gametest\@\@V?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@3\@AEAVGameTestTicker\@6\@$$QEAUTestParameters\@6\@\@Z
     */
    MCAPI static std::unique_ptr<class gametest::BaseGameTestBatchRunner> runTests(class Dimension &, class gametest::GameTestRegistry &, std::unique_ptr<class gametest::IGameTestHelperProvider>, class gametest::GameTestTicker &, struct gametest::TestParameters &&);

//private:
    /**
     * @symbol  ?_subdivideBatch\@GameTestRunner\@\@CA?AV?$vector\@V?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@V?$allocator\@V?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@AEAV?$vector\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VBaseGameTestFunction\@gametest\@\@\@std\@\@\@2\@\@3\@H\@Z
     */
    MCAPI static std::vector<class std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>, class std::allocator<class std::shared_ptr<class gametest::BaseGameTestFunction>>>> _subdivideBatch(std::vector<class std::shared_ptr<class gametest::BaseGameTestFunction>> &, int);

private:

};