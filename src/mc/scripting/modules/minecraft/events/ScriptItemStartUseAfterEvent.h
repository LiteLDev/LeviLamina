#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemStartUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemStartUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk939422;
    ::ll::UntypedStorage<8, 32> mUnk7adbcc;
    ::ll::UntypedStorage<4, 4>  mUnke03dd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemStartUseAfterEvent& operator=(ScriptItemStartUseAfterEvent const&);
    ScriptItemStartUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemStartUseAfterEvent(::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent const&);

    MCAPI ScriptItemStartUseAfterEvent(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemStartUseEvent const&                                                     itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCAPI ~ScriptItemStartUseAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemStartUseAfterEvent const&);

    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item,
        ::Player const&                                                                player,
        ::ItemStartUseEvent const&                                                     itemEvent,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
