#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptButtonPushAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptButtonPushAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptButtonPushAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptButtonPushAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptButtonPushAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                         scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptButtonPushAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                         scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
