#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentStepOffAfterEvent {
public:
    // ScriptBlockCustomComponentStepOffAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentStepOffAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        // symbol: ??1IntermediateStorage@ScriptBlockCustomComponentStepOffAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentStepOffAfterEvent& operator=(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent(ScriptBlockCustomComponentStepOffAfterEvent const&);
    ScriptBlockCustomComponentStepOffAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlockCustomComponentStepOffAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentStepOffAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockCustomComponentStepOffAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentStepOffAfterEvent&&);

    // symbol: ?bind@ScriptBlockCustomComponentStepOffAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
