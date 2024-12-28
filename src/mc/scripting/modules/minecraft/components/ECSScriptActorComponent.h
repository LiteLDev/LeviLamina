#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, typename T1>
class ECSScriptActorComponent {
public:
    // prevent constructor by default
    ECSScriptActorComponent& operator=(ECSScriptActorComponent const&);
    ECSScriptActorComponent(ECSScriptActorComponent const&);
    ECSScriptActorComponent();
};

} // namespace ScriptModuleMinecraft
