#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class ConsoleGameTestListener : public ::gametest::IGameTestListener {
public:
    // prevent constructor by default
    ConsoleGameTestListener& operator=(ConsoleGameTestListener const&);
    ConsoleGameTestListener(ConsoleGameTestListener const&);
    ConsoleGameTestListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance& test) /*override*/;

    // vIndex: 2
    virtual void onTestPassed(::gametest::BaseGameTestInstance& test) /*override*/;

    // vIndex: 3
    virtual void onTestFailed(::gametest::BaseGameTestInstance& test) /*override*/;

    // vIndex: 0
    virtual ~ConsoleGameTestListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onTestStructureLoaded(::gametest::BaseGameTestInstance& test);

    MCAPI void $onTestPassed(::gametest::BaseGameTestInstance& test);

    MCAPI void $onTestFailed(::gametest::BaseGameTestInstance& test);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
