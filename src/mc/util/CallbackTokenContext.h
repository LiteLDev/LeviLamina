#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class CallbackTokenContext {
public:
    // prevent constructor by default
    CallbackTokenContext& operator=(CallbackTokenContext const&);
    CallbackTokenContext(CallbackTokenContext const&);
    CallbackTokenContext();
};
