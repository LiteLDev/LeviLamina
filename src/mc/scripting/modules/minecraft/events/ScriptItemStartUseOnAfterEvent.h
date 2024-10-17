#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseOnAfterEvent {
public:
    // prevent constructor by default
    ScriptItemStartUseOnAfterEvent& operator=(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent(ScriptItemStartUseOnAfterEvent const&);
    ScriptItemStartUseOnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemStartUseOnAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
