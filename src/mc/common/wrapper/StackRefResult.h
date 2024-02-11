#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class StackRefResult {
public:
    // prevent constructor by default
    StackRefResult& operator=(StackRefResult const&);
    StackRefResult(StackRefResult const&);
    StackRefResult();
};
