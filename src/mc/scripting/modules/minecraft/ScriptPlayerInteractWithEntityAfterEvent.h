#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithEntityAfterEvent(struct ScriptModuleMinecraft::
                                                       ScriptPlayerInteractWithEntityAfterEvent const&);

    MCAPI
    ScriptPlayerInteractWithEntityAfterEvent(class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>, std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
