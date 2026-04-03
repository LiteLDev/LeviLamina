#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptActorItemPickupAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorItemPickupAfterEvent {
public:
    // ScriptActorItemPickupAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
        mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorItemPickupAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorItemPickupAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                              scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorItemPickupAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                              scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
