#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, typename T1>
class ScriptVectorIterator {
public:
    // prevent constructor by default
    ScriptVectorIterator& operator=(ScriptVectorIterator const&);
    ScriptVectorIterator(ScriptVectorIterator const&);
    ScriptVectorIterator();
};

} // namespace ScriptModuleMinecraft
