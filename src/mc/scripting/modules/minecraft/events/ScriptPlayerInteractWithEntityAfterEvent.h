#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithEntityEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc41c67;
    ::ll::UntypedStorage<8, 40> mUnk73e1d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityAfterEvent& operator=(ScriptPlayerInteractWithEntityAfterEvent const&);
    ScriptPlayerInteractWithEntityAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptPlayerInteractWithEntityAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    MCNAPI
    ScriptPlayerInteractWithEntityAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCNAPI ScriptPlayerInteractWithEntityAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>                     player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>                      target
    );

    MCNAPI ~ScriptPlayerInteractWithEntityAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithEntityAfterEvent const&);

    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>                     player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>                      target
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
