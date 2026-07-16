#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class DedicatedServerGameTestRunnerListener : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk783d08;
    ::ll::UntypedStorage<8, 168> mUnkc8cbaf;
    ::ll::UntypedStorage<8, 8>   mUnk6d15e9;
    ::ll::UntypedStorage<8, 8>   mUnkaeb310;
    ::ll::UntypedStorage<8, 64>  mUnk40f6ab;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerGameTestRunnerListener& operator=(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTestStarted(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestPassed(::gametest::BaseGameTestInstance&) /*override*/;

    virtual void onTestFailed(::gametest::BaseGameTestInstance&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
