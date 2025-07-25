#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcd11ad;
    ::ll::UntypedStorage<4, 4>  mUnk660964;
    ::ll::UntypedStorage<4, 12> mUnkd7b813;
    ::ll::UntypedStorage<4, 12> mUnkf0da35;
    ::ll::UntypedStorage<1, 1>  mUnkc8e6d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockEvent& operator=(ScriptPlayerInteractWithBlockEvent const&);
    ScriptPlayerInteractWithBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayerInteractWithBlockEvent(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent const&);

    MCNAPI ScriptPlayerInteractWithBlockEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>  block,
        ::ScriptModuleMinecraft::ScriptFacing                                       blockFace,
        ::Vec3                                                                      faceLocation,
        bool                                                                        isFirstEvent
    );

    MCNAPI ~ScriptPlayerInteractWithBlockEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerInteractWithBlockEvent const&);

    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer> player,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>  block,
        ::ScriptModuleMinecraft::ScriptFacing                                       blockFace,
        ::Vec3                                                                      faceLocation,
        bool                                                                        isFirstEvent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
