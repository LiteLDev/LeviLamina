#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHurtBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHurtActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource>                           mDamageSource;
    ::ll::TypedStorage<4, 4, float>                                                                       mDamage;
    ::ll::TypedStorage<1, 1, bool>                                                                        mCancel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHurtBeforeEvent& operator=(ScriptActorHurtBeforeEvent const&);
    ScriptActorHurtBeforeEvent(ScriptActorHurtBeforeEvent const&);
    ScriptActorHurtBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHurtBeforeEvent(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&&);

    MCAPI ScriptActorHurtBeforeEvent(
        ::Actor const&                                   actor,
        ::ScriptModuleMinecraft::ScriptActorDamageSource actorDamageSource,
        float                                            damage,
        ::Scripting::WeakLifetimeScope&                  scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorHurtBeforeEvent&&);

    MCAPI void* $ctor(
        ::Actor const&                                   actor,
        ::ScriptModuleMinecraft::ScriptActorDamageSource actorDamageSource,
        float                                            damage,
        ::Scripting::WeakLifetimeScope&                  scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
