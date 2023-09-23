#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/level/block/utils/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/utils/CompoundBlockVolumePositionRelativity.h"

namespace ScriptModuleMinecraft {

class ScriptCompoundBlockVolume {
public:
    // prevent constructor by default
    ScriptCompoundBlockVolume(ScriptCompoundBlockVolume const&);
    ScriptCompoundBlockVolume();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptCompoundBlockVolume@ScriptModuleMinecraft@@QEAAAEAV01@AEBV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptCompoundBlockVolume&
    operator=(class ScriptModuleMinecraft::ScriptCompoundBlockVolume const&);

    // symbol: ??1ScriptCompoundBlockVolume@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptCompoundBlockVolume();

    // symbol:
    // ?bindActionEnums@ScriptCompoundBlockVolume@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4CompoundBlockVolumeAction@@W41@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<::CompoundBlockVolumeAction, ::CompoundBlockVolumeAction>
    bindActionEnums();

    // symbol:
    // ?bindClass@ScriptCompoundBlockVolume@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptCompoundBlockVolume@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptCompoundBlockVolume>
    bindClass();

    // symbol:
    // ?bindRelativeEnums@ScriptCompoundBlockVolume@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4CompoundBlockVolumePositionRelativity@@W41@@Scripting@@XZ
    MCAPI static class Scripting::
        EnumBindingBuilder<::CompoundBlockVolumePositionRelativity, ::CompoundBlockVolumePositionRelativity>
        bindRelativeEnums();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
