#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace ScriptModuleMinecraft { struct ScriptActorHitEntityAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
            mHitActor;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
            mHitBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHitAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCAPI ScriptActorHitAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitEntityAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
