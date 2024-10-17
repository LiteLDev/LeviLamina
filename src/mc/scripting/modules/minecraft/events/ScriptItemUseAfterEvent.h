#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseAfterEvent {
public:
    // prevent constructor by default
    ScriptItemUseAfterEvent(ScriptItemUseAfterEvent const&);
    ScriptItemUseAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemUseAfterEvent(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack> item,
        class Player const&                                                                    player,
        struct ItemUseEvent const&,
        class Scripting::WeakLifetimeScope const& scope
    );

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseAfterEvent> bindV010();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack> item,
        class Player const&                                                                    player,
        struct ItemUseEvent const&,
        class Scripting::WeakLifetimeScope const& scope
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
