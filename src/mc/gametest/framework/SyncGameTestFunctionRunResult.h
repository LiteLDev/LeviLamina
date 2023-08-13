#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class SyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {

public:
    // prevent constructor by default
    SyncGameTestFunctionRunResult& operator=(SyncGameTestFunctionRunResult const&) = delete;
    SyncGameTestFunctionRunResult(SyncGameTestFunctionRunResult const&)            = delete;
    SyncGameTestFunctionRunResult()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isComplete\@SyncGameTestFunctionRunResult\@gametest\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getError\@SyncGameTestFunctionRunResult\@gametest\@\@UEAA?AV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    virtual std::optional<struct gametest::GameTestError> getError();
    // NOLINTEND
};

}; // namespace gametest
