#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {
public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptActorAddEffectAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilderReadOnly@UScriptActorAddEffectAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilderReadOnly<
        struct ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
