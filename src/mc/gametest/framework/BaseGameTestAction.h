#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkf1db7c;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestAction& operator=(BaseGameTestAction const&);
    BaseGameTestAction(BaseGameTestAction const&);
    BaseGameTestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestAction() = default;

    // vIndex: 1
    virtual ::std::optional<::gametest::GameTestError> run() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace gametest
