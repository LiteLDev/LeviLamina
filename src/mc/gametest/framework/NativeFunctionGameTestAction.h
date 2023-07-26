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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?run\@NativeFunctionGameTestAction\@gametest\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual class std::optional<struct gametest::GameTestError> run(); // NOLINT
    /**
     * @symbol
     * ??0NativeFunctionGameTestAction\@gametest\@\@QEAA\@V?$function\@$$A6A?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ\@std\@\@\@Z
     */
    MCAPI NativeFunctionGameTestAction(class std::function<class std::optional<struct gametest::GameTestError>(void
                                       )>); // NOLINT
};

}; // namespace gametest
