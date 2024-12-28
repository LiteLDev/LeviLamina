#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorAddEffectEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk16e3d4;
    ::ll::UntypedStorage<8, 32> mUnk47c299;
    ::ll::UntypedStorage<4, 4>  mUnka997a7;
    ::ll::UntypedStorage<1, 1>  mUnk651043;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectBeforeEvent& operator=(ScriptActorAddEffectBeforeEvent const&);
    ScriptActorAddEffectBeforeEvent(ScriptActorAddEffectBeforeEvent const&);
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorAddEffectBeforeEvent> bind();
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
