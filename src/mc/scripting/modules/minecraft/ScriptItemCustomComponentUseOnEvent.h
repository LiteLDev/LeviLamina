#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseOnEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentUseOnEvent& operator=(ScriptItemCustomComponentUseOnEvent const&);
    ScriptItemCustomComponentUseOnEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptItemCustomComponentUseOnEvent@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptItemCustomComponentUseOnEvent(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent const&);

    // symbol: ??4ScriptItemCustomComponentUseOnEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseOnEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentUseOnEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
