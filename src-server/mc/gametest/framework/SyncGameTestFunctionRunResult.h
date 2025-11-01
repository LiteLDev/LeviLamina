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
    ::ll::UntypedStorage<8, 248> mUnkc3d536;
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
    virtual ~SyncGameTestFunctionRunResult() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isComplete() const;

    MCNAPI ::std::optional<::gametest::GameTestError> $getError();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
