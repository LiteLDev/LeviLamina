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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ApplicationInitHandler() = default;

    virtual void onFatalInitializationError(char const*) = 0;

    virtual void onMemoryHeapInit() = 0;

    virtual void onConfigureMainThread() = 0;

    virtual void onCrashDumpInit() = 0;

    virtual void onCrashDumpTerminate() = 0;

    virtual ::Bedrock::ApplicationInitHandler::InstallCrashHandlerResult onInstallCrashHandler() = 0;

    virtual void onShutdownCompleted() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
