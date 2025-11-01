#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mBlockFace;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationRelative;
    ::ll::TypedStorage<1, 1, bool> mIsFirstEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockEvent& operator=(ScriptPlayerInteractWithBlockEvent const&);
    ScriptPlayerInteractWithBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerInteractWithBlockEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent const&);

    MCAPI ScriptPlayerInteractWithBlockEvent(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock> block, ::ScriptModuleMinecraft::ScriptFacing blockFace, ::Vec3 faceLocation, bool isFirstEvent);

    MCAPI ~ScriptPlayerInteractWithBlockEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent const&);

    MCAPI void* $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock> block, ::ScriptModuleMinecraft::ScriptFacing blockFace, ::Vec3 faceLocation, bool isFirstEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
