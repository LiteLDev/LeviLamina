#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentEntityFallOnAfterEvent {
public:
    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentEntityFallOnAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??1IntermediateStorage@ScriptBlockCustomComponentEntityFallOnAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentEntityFallOnAfterEvent&
    operator=(ScriptBlockCustomComponentEntityFallOnAfterEvent const&);
    ScriptBlockCustomComponentEntityFallOnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockCustomComponentEntityFallOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptBlockCustomComponentEntityFallOnAfterEvent(struct ScriptModuleMinecraft::
                                                               ScriptBlockCustomComponentEntityFallOnAfterEvent const&);

    // symbol:
    // ??0ScriptBlockCustomComponentEntityFallOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentEntityFallOnAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentEntityFallOnAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptBlockCustomComponentEntityFallOnAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
