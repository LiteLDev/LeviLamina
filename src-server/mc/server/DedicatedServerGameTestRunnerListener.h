#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/IGameTestListener.h"

// auto generated forward declare list
// clang-format off
struct GameTestReport;
namespace gametest { class BaseGameTestInstance; }
namespace gametest { struct GameTestError; }
// clang-format on

class DedicatedServerGameTestRunnerListener : public ::gametest::IGameTestListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk783d08;
    ::ll::UntypedStorage<8, 168> mUnkc8cbaf;
    ::ll::UntypedStorage<8, 8>   mUnk3c6b68;
    ::ll::UntypedStorage<8, 8>   mUnkca4f45;
    ::ll::UntypedStorage<8, 64>  mUnk79a256;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerGameTestRunnerListener& operator=(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener(DedicatedServerGameTestRunnerListener const&);
    DedicatedServerGameTestRunnerListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTestStarted(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual void onTestPassed(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual void onTestFailed(::gametest::BaseGameTestInstance& testInstance) /*override*/;

    virtual ~DedicatedServerGameTestRunnerListener() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DedicatedServerGameTestRunnerListener(
        ::GameTestReport&                    report,
        ::std::unordered_set<::std::string>& failedGameTests,
        ::std::unordered_set<::std::string>& passedGameTests
    );

    MCNAPI void _addTestResult(
        ::std::string const&                       testName,
        ::std::string const&                       result,
        ::std::optional<::gametest::GameTestError> error
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::GameTestReport&                    report,
        ::std::unordered_set<::std::string>& failedGameTests,
        ::std::unordered_set<::std::string>& passedGameTests
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onTestStarted(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestPassed(::gametest::BaseGameTestInstance& testInstance);

    MCNAPI void $onTestFailed(::gametest::BaseGameTestInstance& testInstance);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
