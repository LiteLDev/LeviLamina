#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorAddEffectEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mEffectType;
    ::ll::TypedStorage<4, 4, int>                                                                         mDuration;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorAddEffectBeforeEvent(
        ::ActorAddEffectEvent&                actorEffectAddedEvent,
        ::Actor const&                        actor,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI void copyTo(::ActorAddEffectEvent& addEffectEvent);
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
        ::ActorAddEffectEvent&                actorEffectAddedEvent,
        ::Actor const&                        actor,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
