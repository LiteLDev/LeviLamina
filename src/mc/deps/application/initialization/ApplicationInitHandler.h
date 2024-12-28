#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ApplicationInitHandler {
public:
    // ApplicationInitHandler inner types declare
    // clang-format off
    struct InstallCrashHandlerResult;
    // clang-format on

    // ApplicationInitHandler inner types define
    struct InstallCrashHandlerResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1918e4;
        // NOLINTEND

    public:
        // prevent constructor by default
        InstallCrashHandlerResult& operator=(InstallCrashHandlerResult const&);
        InstallCrashHandlerResult(InstallCrashHandlerResult const&);
        InstallCrashHandlerResult();
    };

public:
    // prevent constructor by default
    ApplicationInitHandler& operator=(ApplicationInitHandler const&);
    ApplicationInitHandler(ApplicationInitHandler const&);
    ApplicationInitHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ApplicationInitHandler();

    // vIndex: 1
    virtual void onFatalInitializationError(char const*) = 0;

    // vIndex: 2
    virtual void onMemoryHeapInit() = 0;

    // vIndex: 3
    virtual void onConfigureMainThread() = 0;

    // vIndex: 4
    virtual void onCrashDumpInit() = 0;

    // vIndex: 5
    virtual void onCrashDumpTerminate() = 0;

    // vIndex: 6
    virtual ::Bedrock::ApplicationInitHandler::InstallCrashHandlerResult onInstallCrashHandler() = 0;

    // vIndex: 7
    virtual void onShutdownCompleted() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
