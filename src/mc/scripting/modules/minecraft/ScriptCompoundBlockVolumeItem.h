#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolumeItem;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolumeItem {
public:
    // prevent constructor by default
    ScriptCompoundBlockVolumeItem();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptCompoundBlockVolumeItem(class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const&);

    // symbol: ??4ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem&
    operator=(class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const&);

    // symbol:
    // ?toCompoundBlockVolumeItem@ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@QEBA?AVCompoundBlockVolumeItem@@XZ
    MCAPI class CompoundBlockVolumeItem toCompoundBlockVolumeItem() const;

    // symbol: ??1ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptCompoundBlockVolumeItem();

    // symbol:
    // ?bindInterface@ScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@VScriptCompoundBlockVolumeItem@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<class ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem>
    bindInterface();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
