#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractWithBlockEvent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mBeforeItemStack;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mAfterItemStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent& operator=(ScriptPlayerInteractWithBlockAfterEvent const&);
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCAPI
    ScriptPlayerInteractWithBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCAPI ScriptPlayerInteractWithBlockAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>                     player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>                      block,
        ::ScriptModuleMinecraft::ScriptFacing                                                           blockFace,
        ::Vec3                                                                                          faceLocation,
        bool                                                                                            isFirstEvent
    );

    MCAPI ~ScriptPlayerInteractWithBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>                     player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>                      block,
        ::ScriptModuleMinecraft::ScriptFacing                                                           blockFace,
        ::Vec3                                                                                          faceLocation,
        bool                                                                                            isFirstEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
