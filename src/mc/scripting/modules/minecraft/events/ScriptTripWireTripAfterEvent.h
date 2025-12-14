#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
struct TripWireTripEvent;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTripWireTripAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsPowered;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
        mSources;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTripWireTripAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTripWireTripAfterEvent(
        ::TripWireTripEvent const&            tripWireTripEvent,
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
    MCAPI void* $ctor(::TripWireTripEvent const& tripWireTripEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
