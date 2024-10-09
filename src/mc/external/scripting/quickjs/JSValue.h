#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSValue {
public:
    // prevent constructor by default
    JSValue& operator=(JSValue const&);
    JSValue(JSValue const&);
    JSValue();
};
