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
    // symbol:
    // ??0ScriptTripWireTripAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUTripWireTripEvent@@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI ScriptTripWireTripAfterEvent(struct TripWireTripEvent const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptTripWireTripAfterEvent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptTripWireTripAfterEvent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptTripWireTripAfterEvent>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
