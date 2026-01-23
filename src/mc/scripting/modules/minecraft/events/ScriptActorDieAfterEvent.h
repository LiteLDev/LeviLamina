#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorDamageSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorDieAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorDieAfterEvent {
public:
    // ScriptActorDieAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mDeadActor;
    ::ll::TypedStorage<8, 88, ::ScriptModuleMinecraft::ScriptActorDamageSource>                           mDamageSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorDieAfterEvent& operator=(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent(ScriptActorDieAfterEvent const&);
    ScriptActorDieAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorDieAfterEvent(::ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCAPI ScriptActorDieAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                       scope
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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorDieAfterEvent&&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorDieAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                       scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
