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

    MCAPI GameTestBatch(
        std::string                                                        name,
        std::vector<std::shared_ptr<class gametest::BaseGameTestFunction>> testFunctions,
        std::function<void()>                                              beforeBatchFunction
    );

    MCAPI ~GameTestBatch();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace gametest
