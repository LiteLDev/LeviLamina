#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
// clang-format on

namespace gametest {

class GameTestBatch {
public:
    // prevent constructor by default
    GameTestBatch& operator=(GameTestBatch const&);
    GameTestBatch(GameTestBatch const&);
    GameTestBatch();

public:
    // NOLINTBEGIN
    // symbol: ?getName@GameTestBatch@gametest@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI
    std::string const& getName();

    // symbol:
    // ?getTestFunctions@GameTestBatch@gametest@@QEAAAEBV?$vector@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@V?$allocator@V?$shared_ptr@VBaseGameTestFunction@gametest@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> const& getTestFunctions();

    // symbol: ?runBeforeBatchFunction@GameTestBatch@gametest@@QEAAXXZ
    MCAPI void runBeforeBatchFunction();

    // symbol: ??1GameTestBatch@gametest@@QEAA@XZ
    MCAPI ~GameTestBatch();

    // NOLINTEND
};

}; // namespace gametest
