#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentryRateLimitConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2e79a4;
    ::ll::UntypedStorage<8, 8> mUnk5d5ea0;
    ::ll::UntypedStorage<4, 4> mUnkb1d559;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentryRateLimitConfig& operator=(ScriptSentryRateLimitConfig const&);
    ScriptSentryRateLimitConfig(ScriptSentryRateLimitConfig const&);
    ScriptSentryRateLimitConfig();
};

} // namespace ScriptModuleDiagnostics
