#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { struct ScriptActorHitBlockAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorHitBlockAfterEvent {
public:
    // ScriptActorHitBlockAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mHitBlock;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
                                                                    mHitBlockPermutation;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHitBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorHitBlockAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorHitBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                            scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
