#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentParameterCacheHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77c28d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentParameterCacheHandle& operator=(ScriptCustomComponentParameterCacheHandle const&);
    ScriptCustomComponentParameterCacheHandle(ScriptCustomComponentParameterCacheHandle const&);
    ScriptCustomComponentParameterCacheHandle();

};

}
