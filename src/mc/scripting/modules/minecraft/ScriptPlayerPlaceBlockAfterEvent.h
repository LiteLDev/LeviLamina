#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockAfterEvent& operator=(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptPlayerPlaceBlockAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptPlayerPlaceBlockAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
