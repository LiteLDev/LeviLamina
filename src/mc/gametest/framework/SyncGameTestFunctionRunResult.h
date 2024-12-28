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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkc3d536;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncGameTestFunctionRunResult& operator=(SyncGameTestFunctionRunResult const&);
    SyncGameTestFunctionRunResult(SyncGameTestFunctionRunResult const&);
    SyncGameTestFunctionRunResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isComplete() const /*override*/;

    // vIndex: 2
    virtual ::std::optional<::gametest::GameTestError> getError() /*override*/;

    // vIndex: 0
    virtual ~SyncGameTestFunctionRunResult() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isComplete() const;

    MCAPI ::std::optional<::gametest::GameTestError> $getError();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
