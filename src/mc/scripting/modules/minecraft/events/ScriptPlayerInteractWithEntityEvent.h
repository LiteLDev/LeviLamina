#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86f816;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityEvent& operator=(ScriptPlayerInteractWithEntityEvent const&);
    ScriptPlayerInteractWithEntityEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerInteractWithEntityEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent const&);

    MCNAPI ScriptPlayerInteractWithEntityEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>  target
    );

    MCNAPI ~ScriptPlayerInteractWithEntityEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent const&);

    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>  target
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
