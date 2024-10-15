#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

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

    MCAPI ScriptPlayerInteractWithEntityAfterEvent(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>                   player,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>> item,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>                    target
    );

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCAPI void* ctor$(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>                   player,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>> item,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>                    target
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
