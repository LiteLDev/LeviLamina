#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ItemUseEvent;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6e57c8;
    ::ll::UntypedStorage<8, 32> mUnka43c0c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseAfterEvent& operator=(ScriptItemUseAfterEvent const&);
    ScriptItemUseAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptItemUseAfterEvent(::ScriptModuleMinecraft::ScriptItemUseAfterEvent const&);

    MCAPI
    ScriptItemUseAfterEvent(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Player const& player, ::ItemUseEvent const& scope, ::Scripting::WeakLifetimeScope const&);

    MCAPI ~ScriptItemUseAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bind();

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptItemUseAfterEvent const&);

    MCAPI void*
    $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Player const& player, ::ItemUseEvent const& scope, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
