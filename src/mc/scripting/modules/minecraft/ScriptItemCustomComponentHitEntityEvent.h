#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentHitEntityEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentHitEntityEvent& operator=(ScriptItemCustomComponentHitEntityEvent const&);
    ScriptItemCustomComponentHitEntityEvent(ScriptItemCustomComponentHitEntityEvent const&);
    ScriptItemCustomComponentHitEntityEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptItemCustomComponentHitEntityEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentHitEntityEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentHitEntityEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
