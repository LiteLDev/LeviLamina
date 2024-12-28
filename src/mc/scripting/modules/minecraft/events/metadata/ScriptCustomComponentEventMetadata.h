#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0>
class ScriptCustomComponentEventMetadata {
public:
    // prevent constructor by default
    ScriptCustomComponentEventMetadata& operator=(ScriptCustomComponentEventMetadata const&);
    ScriptCustomComponentEventMetadata(ScriptCustomComponentEventMetadata const&);
    ScriptCustomComponentEventMetadata();
};

} // namespace ScriptModuleMinecraft
