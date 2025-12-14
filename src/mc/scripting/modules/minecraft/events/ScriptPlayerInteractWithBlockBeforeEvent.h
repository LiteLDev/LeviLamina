#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct PlayerInteractWithBlockBeforeEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent {
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
    ScriptPlayerInteractWithBlockBeforeEvent& operator=(ScriptPlayerInteractWithBlockBeforeEvent const&);
    ScriptPlayerInteractWithBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    MCAPI
    ScriptPlayerInteractWithBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent const&);

    MCAPI ScriptPlayerInteractWithBlockBeforeEvent(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&             scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockBeforeEvent const&);

    MCAPI void* $ctor(
        ::Player&                                   player,
        ::PlayerInteractWithBlockBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&             scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
