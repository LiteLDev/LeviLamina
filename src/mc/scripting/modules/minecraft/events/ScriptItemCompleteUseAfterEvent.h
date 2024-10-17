#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent& operator=(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent(ScriptItemCompleteUseAfterEvent const&);
    ScriptItemCompleteUseAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemCompleteUseAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
