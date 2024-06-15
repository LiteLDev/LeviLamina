#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseEvent {
public:
    // prevent constructor by default
    ScriptItemCustomComponentUseEvent& operator=(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent(ScriptItemCustomComponentUseEvent const&);
    ScriptItemCustomComponentUseEvent();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&
    operator=(struct ScriptModuleMinecraft::ScriptItemCustomComponentUseEvent&&);

    // symbol: ?bind@ScriptItemCustomComponentUseEvent@ScriptModuleMinecraft@@SA?AUClassBinding@Scripting@@XZ
    MCAPI static struct Scripting::ClassBinding bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
