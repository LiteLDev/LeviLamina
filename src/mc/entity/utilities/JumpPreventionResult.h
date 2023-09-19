#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpPreventionResult {
public:
    // prevent constructor by default
    JumpPreventionResult& operator=(JumpPreventionResult const&);
    JumpPreventionResult(JumpPreventionResult const&);
    JumpPreventionResult();
};
