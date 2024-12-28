#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/events/ScriptBlockEvent.h"

// auto generated forward declare list
// clang-format off
struct TripWireTripEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTripWireTripAfterEvent : public ::ScriptModuleMinecraft::ScriptBlockEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkccc723;
    ::ll::UntypedStorage<8, 24> mUnk8ad5c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTripWireTripAfterEvent& operator=(ScriptTripWireTripAfterEvent const&);
    ScriptTripWireTripAfterEvent(ScriptTripWireTripAfterEvent const&);
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptTripWireTripAfterEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TripWireTripEvent const& tripWireTripEvent, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
