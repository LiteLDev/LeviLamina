#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemUseOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnAfterEvent {
public:
    // prevent constructor by default
    ScriptItemUseOnAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptItemUseOnAfterEvent(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

    MCAPI ScriptItemUseOnAfterEvent(
        struct ItemUseOnEvent const&                                                           itemEvent,
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack> item,
        class Player const&                                                                    player,
        class Scripting::WeakLifetimeScope const&                                              scope
    );

    MCAPI class Scripting::Result<class BlockPos> getBlockLocation_V010() const;

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptItemUseOnAfterEvent>
    bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
