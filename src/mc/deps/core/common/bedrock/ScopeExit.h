#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ScopeExit {

public:
    // prevent constructor by default
    ScopeExit& operator=(ScopeExit const&) = delete;
    ScopeExit(ScopeExit const&)            = delete;
    ScopeExit()                            = delete;

public:
    /**
     * @symbol ??1ScopeExit\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ScopeExit(); // NOLINT
};

}; // namespace Bedrock
