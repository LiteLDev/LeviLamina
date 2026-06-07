#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PlayerInteractWithEntityBeforeEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                   mItemStack;
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithEntityBeforeEvent(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&              scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player&                                    player,
        ::Actor&                                     target,
        ::PlayerInteractWithEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&              scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
