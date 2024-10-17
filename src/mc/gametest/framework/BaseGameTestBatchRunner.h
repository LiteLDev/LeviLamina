#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class GameTestBatch; }
namespace gametest { class GameTestTicker; }
namespace gametest { struct TestParameters; }
// clang-format on

namespace gametest {

class BaseGameTestBatchRunner {
public:
    // prevent constructor by default
    BaseGameTestBatchRunner& operator=(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner(BaseGameTestBatchRunner const&);
    BaseGameTestBatchRunner();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestBatchRunner();

    // vIndex: 1
    virtual std::shared_ptr<class gametest::BaseGameTestInstance>
    _createGameTestInstance(class gametest::BaseGameTestFunction& function) = 0;

    // vIndex: 2
    virtual void
    _runTest(std::shared_ptr<class gametest::BaseGameTestInstance> test, class gametest::GameTestTicker& ticker) = 0;

    MCAPI BaseGameTestBatchRunner(
        std::vector<class gametest::GameTestBatch>&& batches,
        class gametest::GameTestTicker&              testTicker,
        struct gametest::TestParameters&&            params
    );

    MCAPI void start();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addTestInstanceWithRotation(
        std::vector<std::shared_ptr<class gametest::BaseGameTestInstance>>& instances,
        std::shared_ptr<class gametest::BaseGameTestFunction>               testFunction,
        ::Rotation                                                          rotation
    );

    MCAPI void _resetBatchTracker();

    MCAPI void _runBatch(int batchIndex);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::vector<class gametest::GameTestBatch>&& batches,
        class gametest::GameTestTicker&              testTicker,
        struct gametest::TestParameters&&            params
    );

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
