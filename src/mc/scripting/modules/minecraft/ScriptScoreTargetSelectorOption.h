#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptScoreTargetSelectorOption {
public:
    // prevent constructor by default
    ScriptScoreTargetSelectorOption(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption();

public:
    // NOLINTBEGIN
    // symbol: ??4ScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@QEAAAEAU01@$$QEAU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&&);

    // symbol: ??4ScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@QEAAAEAU01@AEBU01@@Z
    MCAPI struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption const&);

    // symbol:
    // ?bindV010@ScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@UScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>
    bindV010();

    // symbol:
    // ?bindV1@ScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@SA?AV?$InterfaceBindingBuilder@UScriptScoreTargetSelectorOption@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>
    bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
