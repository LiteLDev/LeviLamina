#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::Detail {

struct BeforeEventExecutor {
public:
    // prevent constructor by default
    BeforeEventExecutor& operator=(BeforeEventExecutor const&);
    BeforeEventExecutor(BeforeEventExecutor const&);
    BeforeEventExecutor();
};

} // namespace ScriptModuleMinecraft::Detail
