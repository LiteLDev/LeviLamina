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

public:
    // NOLINTBEGIN
    MCAPI ScriptScoreTargetSelectorOption();

    MCAPI struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&&);

    MCAPI struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption const&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>
    bindV010();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptScoreTargetSelectorOption>
    bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
