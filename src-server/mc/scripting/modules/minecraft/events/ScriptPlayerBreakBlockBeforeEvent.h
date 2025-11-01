#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerBreakBlockBeforeEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>> mItem;
    ::ll::TypedStorage<1, 1, bool> mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerBreakBlockBeforeEvent& operator=(ScriptPlayerBreakBlockBeforeEvent const&);
    ScriptPlayerBreakBlockBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerBreakBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    MCAPI ScriptPlayerBreakBlockBeforeEvent(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    MCAPI ScriptPlayerBreakBlockBeforeEvent(::Player const& player, ::Dimension& dimension, ::BlockPos const& pos, ::ItemStackBase const& item, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ~ScriptPlayerBreakBlockBeforeEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPlayerBreakBlockBeforeEvent&&);

    MCAPI void* $ctor(::Player const& player, ::Dimension& dimension, ::BlockPos const& pos, ::ItemStackBase const& item, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
