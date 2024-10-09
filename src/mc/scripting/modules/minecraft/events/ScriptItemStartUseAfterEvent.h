#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemStartUseAfterEvent& operator=(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
