#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

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
};

}; // namespace ScriptModuleMinecraft
