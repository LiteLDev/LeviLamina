#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct TripWireTripEvent;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTripWireTripAfterEvent {
public:
    // prevent constructor by default
    ScriptTripWireTripAfterEvent& operator=(ScriptTripWireTripAfterEvent const&);
    ScriptTripWireTripAfterEvent(ScriptTripWireTripAfterEvent const&);
    ScriptTripWireTripAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptTripWireTripAfterEvent(struct TripWireTripEvent const&, class Scripting::WeakLifetimeScope const&);

    MCAPI struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
