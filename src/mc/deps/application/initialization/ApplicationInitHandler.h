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
};

} // namespace Bedrock
