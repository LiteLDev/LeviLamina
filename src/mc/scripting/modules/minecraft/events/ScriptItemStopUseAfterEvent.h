#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemStopUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka99d7d;
    ::ll::UntypedStorage<8, 32> mUnkbc4830;
    ::ll::UntypedStorage<4, 4>  mUnk2fb80f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStopUseAfterEvent& operator=(ScriptItemStopUseAfterEvent const&);
    ScriptItemStopUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemStopUseAfterEvent(::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&);

    MCNAPI ScriptItemStopUseAfterEvent(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemStopUseEvent const&                                                                       itemEvent,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCNAPI ~ScriptItemStopUseAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemStopUseEvent const&                                                                       itemEvent,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
