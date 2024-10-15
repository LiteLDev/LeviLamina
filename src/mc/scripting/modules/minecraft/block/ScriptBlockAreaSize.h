#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockAreaSize {
public:
    // prevent constructor by default
    ScriptBlockAreaSize& operator=(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize(ScriptBlockAreaSize const&);
    ScriptBlockAreaSize();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockAreaSize(float x, float y, float z);

    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptBlockAreaSize const& other) const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockAreaSize> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(float x, float y, float z);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
