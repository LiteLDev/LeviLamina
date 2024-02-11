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
    // vIndex: 0, symbol: __gen_??1NativeFunctionGameTestAction@gametest@@UEAA@XZ
    virtual ~NativeFunctionGameTestAction() = default;

    // vIndex: 1, symbol:
    // ?run@NativeFunctionGameTestAction@gametest@@UEAA?AV?$optional@UGameTestError@gametest@@@std@@XZ
    virtual std::optional<struct gametest::GameTestError> run();

    // symbol:
    // ??0NativeFunctionGameTestAction@gametest@@QEAA@V?$function@$$A6A?AV?$optional@UGameTestError@gametest@@@std@@XZ@std@@@Z
    MCAPI explicit NativeFunctionGameTestAction(std::function<std::optional<struct gametest::GameTestError>()>);

    // NOLINTEND
};

}; // namespace gametest
