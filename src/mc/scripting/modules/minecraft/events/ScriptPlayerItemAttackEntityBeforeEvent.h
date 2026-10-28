#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
struct PlayerItemAttackEntityBeforeEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerItemAttackEntityBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>  mTarget;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
                                                       mItemStack;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mAimDirection;
    ::ll::TypedStorage<1, 1, bool>                     mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerItemAttackEntityBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerItemAttackEntityBeforeEvent(
        ::Player&                                  player,
        ::Actor&                                   target,
        ::PlayerItemAttackEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&            scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player&                                  player,
        ::Actor&                                   target,
        ::PlayerItemAttackEntityBeforeEvent const& eventData,
        ::Scripting::WeakLifetimeScope&            scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
