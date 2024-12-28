#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
struct ScriptCustomComponentPubSubAdapterStorage {
public:
    // prevent constructor by default
    ScriptCustomComponentPubSubAdapterStorage& operator=(ScriptCustomComponentPubSubAdapterStorage const&);
    ScriptCustomComponentPubSubAdapterStorage(ScriptCustomComponentPubSubAdapterStorage const&);
    ScriptCustomComponentPubSubAdapterStorage();
};

} // namespace ScriptModuleMinecraft
