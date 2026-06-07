#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptContainerAccessSource.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorContainerAccessAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorContainerClosedAfterEvent {
public:
    // ScriptActorContainerClosedAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 40, ::ScriptModuleMinecraft::ScriptContainerAccessSource>                       mCloseSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorContainerClosedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorContainerClosedAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
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
    MCFOLD void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorContainerAccessAfterEventIntermediateData> const&
                                              eventData,
        ::Scripting::WeakLifetimeScope const& scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
