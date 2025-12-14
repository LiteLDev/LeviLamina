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
    ScriptActorAddEffectAfterEvent& operator=(ScriptActorAddEffectAfterEvent const&);
    ScriptActorAddEffectAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorAddEffectAfterEvent(::ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent const&);

    MCAPI ~ScriptActorAddEffectAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorAddEffectAfterEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
