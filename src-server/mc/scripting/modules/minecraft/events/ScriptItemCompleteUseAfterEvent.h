#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCompleteUseEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemCompleteUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCompleteUseAfterEvent : public ::ScriptModuleMinecraft::ScriptItemCompleteUseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mUseDuration;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCompleteUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemCompleteUseAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemCompleteUseEvent const&                                                  itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemCompleteUseEvent const&                                                  itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
