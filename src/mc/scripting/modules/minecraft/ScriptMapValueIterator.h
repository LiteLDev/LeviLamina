#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

template <typename T0, typename T1>
class ScriptMapValueIterator {
public:
    // prevent constructor by default
    ScriptMapValueIterator& operator=(ScriptMapValueIterator const&);
    ScriptMapValueIterator(ScriptMapValueIterator const&);
    ScriptMapValueIterator();
};

} // namespace ScriptModuleMinecraft
