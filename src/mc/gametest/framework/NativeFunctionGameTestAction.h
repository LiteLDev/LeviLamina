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
    NativeFunctionGameTestAction& operator=(NativeFunctionGameTestAction const&) = delete;
    NativeFunctionGameTestAction(NativeFunctionGameTestAction const&)            = delete;
    NativeFunctionGameTestAction()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?run\@NativeFunctionGameTestAction\@gametest\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual std::optional<struct gametest::GameTestError> run();
    /**
     * @symbol
     * ??0NativeFunctionGameTestAction\@gametest\@\@QEAA\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI NativeFunctionGameTestAction(std::function<std::optional<struct gametest::GameTestError>(void)>);
    // NOLINTEND
};

}; // namespace gametest
