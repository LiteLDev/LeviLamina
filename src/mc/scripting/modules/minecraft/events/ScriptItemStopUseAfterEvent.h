#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemStopUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptItemStopUseAfterEvent(::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&);

    MCAPI ScriptItemStopUseAfterEvent(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemStopUseEvent const&                                                                       itemEvent,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );

    MCAPI ~ScriptItemStopUseAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptItemStopUseAfterEvent const&);

    MCFOLD void* $ctor(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>> item,
        ::Player const&                                                                                 player,
        ::ItemStopUseEvent const&                                                                       itemEvent,
        ::Scripting::WeakLifetimeScope const&                                                           scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
