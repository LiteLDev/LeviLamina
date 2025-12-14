#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemStopUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSource;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>  mBlock;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mScriptItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&);
    ScriptItemStopUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemStopUseOnAfterEvent(::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);

    MCAPI ScriptItemStopUseOnAfterEvent(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::ItemStopUseOnEvent const&                                                                     itemEvent,
        ::Player*                                                                                       player,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCAPI ~ScriptItemStopUseOnAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);

    MCAPI void* $ctor(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::ItemStopUseOnEvent const&                                                                     itemEvent,
        ::Player*                                                                                       player,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
