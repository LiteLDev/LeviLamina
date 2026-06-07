#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptMobEffectInstance; }
namespace ScriptModuleMinecraft { struct ScriptActorAddEffectAfterEventIntermediateData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorAddEffectAfterEvent {
public:
    // ScriptActorAddEffectAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                             mScope;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>
        mEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorAddEffectAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorAddEffectAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorAddEffectAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                             scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
