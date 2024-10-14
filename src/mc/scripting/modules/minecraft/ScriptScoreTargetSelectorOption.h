#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
