#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockAfterEvent& operator=(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent(ScriptPlayerPlaceBlockAfterEvent const&);
    ScriptPlayerPlaceBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
