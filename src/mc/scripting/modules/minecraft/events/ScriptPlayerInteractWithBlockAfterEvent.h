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
    ::ll::UntypedStorage<8, 40> mUnke04ec3;
    ::ll::UntypedStorage<8, 40> mUnk979963;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockAfterEvent& operator=(ScriptPlayerInteractWithBlockAfterEvent const&);
    ScriptPlayerInteractWithBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerInteractWithBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCNAPI
    ScriptPlayerInteractWithBlockAfterEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCNAPI ScriptPlayerInteractWithBlockAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>                     player,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> beforeItemStack,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> afterItemStack,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>                      block,
        ::ScriptModuleMinecraft::ScriptFacing                                                           blockFace,
        ::Vec3                                                                                          faceLocation,
        bool                                                                                            isFirstEvent
    );

    MCNAPI ~ScriptPlayerInteractWithBlockAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockAfterEvent const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
