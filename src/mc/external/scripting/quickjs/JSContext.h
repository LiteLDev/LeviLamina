#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSContext {
public:
    // prevent constructor by default
    JSContext& operator=(JSContext const&);
    JSContext(JSContext const&);
    JSContext();
};
