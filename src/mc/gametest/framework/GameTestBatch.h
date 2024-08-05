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
    GameTestBatch();

public:
    // NOLINTBEGIN
    MCAPI
    GameTestBatch(class gametest::GameTestBatch const&);

    MCAPI
    GameTestBatch(std::string name, std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>>, std::function<void()>);

    MCAPI ~GameTestBatch();

    // NOLINTEND
};

}; // namespace gametest
