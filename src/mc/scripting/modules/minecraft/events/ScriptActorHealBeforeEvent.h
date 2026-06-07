#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorHealSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorBeforeHealEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHealedActor;
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptActorHealSource>                              mHealSource;
    ::ll::TypedStorage<4, 4, float>                                                                       mHealing;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHealBeforeEvent(
        ::Actor const&                  actor,
        ::ActorBeforeHealEvent const&   actorBeforeHealEvent,
        ::Scripting::WeakLifetimeScope& scope
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
        ::Actor const&                  actor,
        ::ActorBeforeHealEvent const&   actorBeforeHealEvent,
        ::Scripting::WeakLifetimeScope& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
