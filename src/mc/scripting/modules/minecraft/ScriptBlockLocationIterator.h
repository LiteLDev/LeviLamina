#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockLocationIterator {
public:
    // prevent constructor by default
    ScriptBlockLocationIterator& operator=(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator(ScriptBlockLocationIterator const&);
    ScriptBlockLocationIterator();

public:
    // NOLINTBEGIN
    MCAPI class ScriptModuleMinecraft::ScriptBlockLocationIterator&
    operator=(class ScriptModuleMinecraft::ScriptBlockLocationIterator&& it);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockLocationIterator> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
