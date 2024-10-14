#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestFunctionRunResult.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class IGameTestFunctionRunResult; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class SyncGameTestFunctionRunResult : public ::gametest::IGameTestFunctionRunResult {
public:
    // prevent constructor by default
    SyncGameTestFunctionRunResult& operator=(SyncGameTestFunctionRunResult const&);
    SyncGameTestFunctionRunResult(SyncGameTestFunctionRunResult const&);
    SyncGameTestFunctionRunResult();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SyncGameTestFunctionRunResult() = default;

    // vIndex: 1
    virtual bool isComplete() const;

    // vIndex: 2
    virtual std::optional<struct gametest::GameTestError> getError();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::optional<struct gametest::GameTestError> getError$();

    MCAPI bool isComplete$() const;

    // NOLINTEND
};

}; // namespace gametest
