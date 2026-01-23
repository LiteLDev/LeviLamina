#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptLeverActionAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptLeverActionAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptLeverActionAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                         mIsPowered;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLeverActionAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptLeverActionAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptLeverActionAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                          scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
