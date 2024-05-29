#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentInterface {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentInterface();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEAA@$$QEAU01@@Z
    MCAPI ScriptBlockCustomComponentInterface(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);

    // symbol: ??0ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEAA@AEBU01@@Z
    MCAPI ScriptBlockCustomComponentInterface(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&);

    // symbol: ?isEmpty@ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ??4ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);

    // symbol: ??4ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&);

    // symbol: ??1ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptBlockCustomComponentInterface();

    // symbol:
    // ?bind@ScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
