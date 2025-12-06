#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
struct PistonActionEvent;
namespace ScriptModuleMinecraft { struct ScriptBlockPistonComponent; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponent>>
                                   mPiston;
    ::ll::TypedStorage<1, 1, bool> mIsExpanding;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPistonActionAfterEvent(
        ::PistonActionEvent const&                                                                pistonActionEvent,
        ::BlockSourceHandle&                                                                      blockSourceHandle,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponent> piston,
        ::Scripting::WeakLifetimeScope const&                                                     scope
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
        ::PistonActionEvent const&                                                                pistonActionEvent,
        ::BlockSourceHandle&                                                                      blockSourceHandle,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPistonComponent> piston,
        ::Scripting::WeakLifetimeScope const&                                                     scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
