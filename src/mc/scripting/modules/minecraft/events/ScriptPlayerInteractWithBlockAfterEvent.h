#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockAfterEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI
    ScriptPlayerInteractWithBlockAfterEvent(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCAPI ScriptPlayerInteractWithBlockAfterEvent(struct ScriptModuleMinecraft::
                                                      ScriptPlayerInteractWithBlockAfterEvent const&);

    MCAPI ScriptPlayerInteractWithBlockAfterEvent(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>                   player,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>> item,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>                    block,
        ::ScriptModuleMinecraft::ScriptFacing                                                                 blockFace,
        class Vec3 faceLocation
    );

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCAPI void* ctor$(struct ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCAPI void* ctor$(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptPlayer>                   player,
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>> item,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>                    block,
        ::ScriptModuleMinecraft::ScriptFacing                                                                 blockFace,
        class Vec3 faceLocation
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
