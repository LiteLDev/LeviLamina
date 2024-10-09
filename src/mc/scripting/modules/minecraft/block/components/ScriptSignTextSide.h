#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/level/block/actor/SignTextSide.h"

namespace ScriptModuleMinecraft {

class ScriptSignTextSide {
public:
    // prevent constructor by default
    ScriptSignTextSide& operator=(ScriptSignTextSide const&);
    ScriptSignTextSide(ScriptSignTextSide const&);
    ScriptSignTextSide();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::SignTextSide> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
