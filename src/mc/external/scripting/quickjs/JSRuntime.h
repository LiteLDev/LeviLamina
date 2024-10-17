#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSRuntime {
public:
    // prevent constructor by default
    JSRuntime& operator=(JSRuntime const&);
    JSRuntime(JSRuntime const&);
    JSRuntime();
};
