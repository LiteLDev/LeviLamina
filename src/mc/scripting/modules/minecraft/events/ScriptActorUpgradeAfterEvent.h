#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorUpgradeAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorUpgradeAfterEvent {
public:
    // ScriptActorUpgradeAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::std::string>                                                              mUpgrade;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionModifier>>                                   mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorUpgradeAfterEvent& operator=(ScriptActorUpgradeAfterEvent const&);
    ScriptActorUpgradeAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorUpgradeAfterEvent(::ScriptModuleMinecraft::ScriptActorUpgradeAfterEvent const&);

    MCAPI ScriptActorUpgradeAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData> actorUpgradeEvent,
        ::Scripting::WeakLifetimeScope const&                                                    scope
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
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptActorUpgradeAfterEvent const&);

    MCFOLD void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorUpgradeAfterEventIntermediateData> actorUpgradeEvent,
        ::Scripting::WeakLifetimeScope const&                                                    scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
