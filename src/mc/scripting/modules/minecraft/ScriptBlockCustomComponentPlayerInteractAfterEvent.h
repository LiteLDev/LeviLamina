#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerInteractAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentPlayerInteractAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??1IntermediateStorage@ScriptBlockCustomComponentPlayerInteractAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerInteractAfterEvent const&);
    ScriptBlockCustomComponentPlayerInteractAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockCustomComponentPlayerInteractAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI
    ScriptBlockCustomComponentPlayerInteractAfterEvent(struct ScriptModuleMinecraft::
                                                           ScriptBlockCustomComponentPlayerInteractAfterEvent const&);

    // symbol:
    // ??0ScriptBlockCustomComponentPlayerInteractAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentPlayerInteractAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockCustomComponentPlayerInteractAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerInteractAfterEvent&&);

    // symbol:
    // ?bind@ScriptBlockCustomComponentPlayerInteractAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
