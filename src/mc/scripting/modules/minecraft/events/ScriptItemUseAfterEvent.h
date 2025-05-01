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
    MCNAPI ScriptItemUseAfterEvent(::ScriptModuleMinecraft::ScriptItemUseAfterEvent const&);

    MCNAPI
    ScriptItemUseAfterEvent(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Player const& player, ::ItemUseEvent const& scope, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ~ScriptItemUseAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bind();

    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemUseAfterEvent> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemUseAfterEvent const&);

    MCNAPI void*
    $ctor(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack> item, ::Player const& player, ::ItemUseEvent const& scope, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
