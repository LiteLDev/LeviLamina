#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEvent {
public:
    // ScriptDataDrivenActorTriggerAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier>>                                   mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEvent& operator=(ScriptDataDrivenActorTriggerAfterEvent const&);
    ScriptDataDrivenActorTriggerAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent const&);

    MCAPI ScriptDataDrivenActorTriggerAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>
                                              actorDefinitionEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent const&);

    MCFOLD void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEventIntermediateData>
                                              actorDefinitionEvent,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
