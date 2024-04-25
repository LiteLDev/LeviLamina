#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentPlayerDestroyAfterEvent {
public:
    // ScriptBlockCustomComponentPlayerDestroyAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentPlayerDestroyAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??1IntermediateStorage@ScriptBlockCustomComponentPlayerDestroyAfterEvent@ScriptModuleMinecraft@@QEAA@XZ
        MCAPI ~IntermediateStorage();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);
    ScriptBlockCustomComponentPlayerDestroyAfterEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockCustomComponentPlayerDestroyAfterEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(struct ScriptModuleMinecraft::
                                                          ScriptBlockCustomComponentPlayerDestroyAfterEvent const&);

    // symbol:
    // ??0ScriptBlockCustomComponentPlayerDestroyAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentPlayerDestroyAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol: ??4ScriptBlockCustomComponentPlayerDestroyAfterEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentPlayerDestroyAfterEvent&&);

    // symbol:
    // ?bind@ScriptBlockCustomComponentPlayerDestroyAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
