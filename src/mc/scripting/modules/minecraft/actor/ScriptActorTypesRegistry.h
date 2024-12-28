#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptActorTypesRegistry {
public:
    // prevent constructor by default
    ScriptActorTypesRegistry& operator=(ScriptActorTypesRegistry const&);
    ScriptActorTypesRegistry(ScriptActorTypesRegistry const&);
    ScriptActorTypesRegistry();
};

} // namespace ScriptModuleMinecraft
