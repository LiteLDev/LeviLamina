#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemStopUseOnEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStopUseOnAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6175c8;
    ::ll::UntypedStorage<8, 32> mUnkcc8a75;
    ::ll::UntypedStorage<8, 40> mUnk49d84a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStopUseOnAfterEvent& operator=(ScriptItemStopUseOnAfterEvent const&);
    ScriptItemStopUseOnAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemStopUseOnAfterEvent(::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);

    MCNAPI ScriptItemStopUseOnAfterEvent(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::ItemStopUseOnEvent const&                                                                     itemEvent,
        ::Player*                                                                                       player,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCNAPI ~ScriptItemStopUseOnAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStopUseOnAfterEvent const&);

    MCNAPI void* $ctor(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::ItemStopUseOnEvent const&                                                                     itemEvent,
        ::Player*                                                                                       player,
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
