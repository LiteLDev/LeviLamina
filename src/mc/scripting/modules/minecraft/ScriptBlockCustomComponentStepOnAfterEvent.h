#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOnAfterEvent {
public:
    // ScriptBlockCustomComponentStepOnAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentStepOnAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        // symbol: ??1IntermediateStorage@ScriptBlockCustomComponentStepOnAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOnAfterEvent& operator=(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent(ScriptBlockCustomComponentStepOnAfterEvent const&);
    ScriptBlockCustomComponentStepOnAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlockCustomComponentStepOnAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentStepOnAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockCustomComponentStepOnAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOnAfterEvent&&);

    // symbol: ?bind@ScriptBlockCustomComponentStepOnAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
