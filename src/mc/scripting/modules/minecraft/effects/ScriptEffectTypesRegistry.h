#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptEffectTypesRegistry {
public:
    // prevent constructor by default
    ScriptEffectTypesRegistry& operator=(ScriptEffectTypesRegistry const&);
    ScriptEffectTypesRegistry(ScriptEffectTypesRegistry const&);
    ScriptEffectTypesRegistry();
};

} // namespace ScriptModuleMinecraft
