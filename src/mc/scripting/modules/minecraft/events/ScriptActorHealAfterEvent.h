#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorHealSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorHealAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealAfterEvent {
public:
    // ScriptActorHealAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mHealedActor;
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptActorHealSource>                              mHealSource;
    ::ll::TypedStorage<4, 4, float>                                                                       mHealing;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHealAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope&                                                              scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope&                                                              scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
