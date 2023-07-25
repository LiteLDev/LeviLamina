#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ScopeExit {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_SCOPEEXIT
public:
    ScopeExit& operator=(ScopeExit const&) = delete;
    ScopeExit(ScopeExit const&)            = delete;
    ScopeExit()                            = delete;
#endif

public:
    /**
     * @symbol ??1ScopeExit\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~ScopeExit();
};

}; // namespace Bedrock
