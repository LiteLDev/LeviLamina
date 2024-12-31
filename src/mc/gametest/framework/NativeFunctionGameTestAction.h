#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestAction.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class NativeFunctionGameTestAction : public ::gametest::BaseGameTestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk69d2a1;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeFunctionGameTestAction& operator=(NativeFunctionGameTestAction const&);
    NativeFunctionGameTestAction(NativeFunctionGameTestAction const&);
    NativeFunctionGameTestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::gametest::GameTestError> run() /*override*/;

    // vIndex: 0
    virtual ~NativeFunctionGameTestAction() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::gametest::GameTestError> $run();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
