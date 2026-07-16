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
    // virtual functions
    // NOLINTBEGIN
    virtual void onTestStructureLoaded(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestPassed(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestFailed(::gametest::BaseGameTestInstance&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
