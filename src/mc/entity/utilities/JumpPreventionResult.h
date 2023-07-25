#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpPreventionResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPPREVENTIONRESULT
public:
    JumpPreventionResult& operator=(JumpPreventionResult const&) = delete;
    JumpPreventionResult(JumpPreventionResult const&)            = delete;
    JumpPreventionResult()                                       = delete;
#endif

public:
};
