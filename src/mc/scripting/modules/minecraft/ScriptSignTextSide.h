#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SignTextSide.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptSignTextSide {
public:
    // prevent constructor by default
    ScriptSignTextSide& operator=(ScriptSignTextSide const&);
    ScriptSignTextSide(ScriptSignTextSide const&);
    ScriptSignTextSide();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptSignTextSide@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SignTextSide@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::SignTextSide> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
