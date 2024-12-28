#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename... T0>
struct ScriptCustomComponentPubSubConnectors {
public:
    // prevent constructor by default
    ScriptCustomComponentPubSubConnectors& operator=(ScriptCustomComponentPubSubConnectors const&);
    ScriptCustomComponentPubSubConnectors(ScriptCustomComponentPubSubConnectors const&);
    ScriptCustomComponentPubSubConnectors();
};

} // namespace ScriptModuleMinecraft
