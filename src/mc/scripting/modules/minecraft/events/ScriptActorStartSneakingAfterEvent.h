#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorSneakingStateAfterEventIntermediateData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorStartSneakingAfterEvent {
public:
    // ScriptActorStartSneakingAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorSneakingStateAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mActor;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
