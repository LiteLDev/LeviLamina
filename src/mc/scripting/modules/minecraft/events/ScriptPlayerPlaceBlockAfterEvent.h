#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptPlayerPlaceBlockAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerPlaceBlockAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // ScriptPlayerPlaceBlockAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerPlaceBlockAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerPlaceBlockAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
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
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptPlayerPlaceBlockAfterEventIntermediateData> const& eventData,
        ::Scripting::WeakLifetimeScope const&                                                               scope
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
