#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct CrashFileProcessor {
public:
    // CrashFileProcessor inner types declare
    // clang-format off
    struct CrashHandler;
    // clang-format on

    // CrashFileProcessor inner types define
    enum class ProcessMode : uint {};

    struct CrashHandler {
    public:
        // CrashHandler inner types declare
        // clang-format off
        struct StatusUpdate;
        // clang-format on

        // CrashHandler inner types define
        struct StatusUpdate {};
    };
};

} // namespace Bedrock
