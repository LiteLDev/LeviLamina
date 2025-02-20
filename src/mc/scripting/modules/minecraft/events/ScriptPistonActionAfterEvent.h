#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
struct PistonActionEvent;
namespace ScriptModuleMinecraft { class ScriptBlockPistonComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPistonActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf83ed5;
    ::ll::UntypedStorage<1, 1>  mUnk71f088;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPistonActionAfterEvent& operator=(ScriptPistonActionAfterEvent const&);
    ScriptPistonActionAfterEvent(ScriptPistonActionAfterEvent const&);
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPistonActionAfterEvent> bind();
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
