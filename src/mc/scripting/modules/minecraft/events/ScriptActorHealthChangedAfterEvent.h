#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorHealthChangedAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHealthChangedAfterEvent {
public:
    // ScriptActorHealthChangedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<4, 4, float>                                                                       mOldValue;
    ::ll::TypedStorage<4, 4, float>                                                                       mNewValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealthChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHealthChangedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                                 scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
