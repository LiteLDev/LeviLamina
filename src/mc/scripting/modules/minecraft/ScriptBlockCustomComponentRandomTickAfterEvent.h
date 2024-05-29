#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentRandomTickAfterEvent {
public:
    // ScriptBlockCustomComponentRandomTickAfterEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptBlockCustomComponentRandomTickAfterEvent inner types define
    struct IntermediateStorage {
    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
        IntermediateStorage(IntermediateStorage const&);
        IntermediateStorage();
    };

public:
    // prevent constructor by default
    ScriptBlockCustomComponentRandomTickAfterEvent& operator=(ScriptBlockCustomComponentRandomTickAfterEvent const&);
    ScriptBlockCustomComponentRandomTickAfterEvent(ScriptBlockCustomComponentRandomTickAfterEvent const&);
    ScriptBlockCustomComponentRandomTickAfterEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ScriptBlockCustomComponentRandomTickAfterEvent@ScriptModuleMinecraft@@QEAA@AEBUIntermediateStorage@01@AEBVWeakLifetimeScope@Scripting@@@Z
    MCAPI
    ScriptBlockCustomComponentRandomTickAfterEvent(struct ScriptModuleMinecraft::ScriptBlockCustomComponentRandomTickAfterEvent::IntermediateStorage const&, class Scripting::WeakLifetimeScope const&);

    // symbol:
    // ?bind@ScriptBlockCustomComponentRandomTickAfterEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
