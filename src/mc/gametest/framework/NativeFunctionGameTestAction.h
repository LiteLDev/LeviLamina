#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class NativeFunctionGameTestAction {
public:
    // prevent constructor by default
    NativeFunctionGameTestAction& operator=(NativeFunctionGameTestAction const&);
    NativeFunctionGameTestAction(NativeFunctionGameTestAction const&);
    NativeFunctionGameTestAction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeFunctionGameTestAction() = default;

    // vIndex: 1
    virtual std::optional<struct gametest::GameTestError> run();

    MCAPI explicit NativeFunctionGameTestAction(std::function<std::optional<struct gametest::GameTestError>()>);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::optional<struct gametest::GameTestError> run$();

    // NOLINTEND
};

}; // namespace gametest
