#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptRawMessageScoreInterface {
public:
    // prevent constructor by default
    ScriptRawMessageScoreInterface();

public:
    // NOLINTBEGIN
    MCAPI ScriptRawMessageScoreInterface(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&);

    MCAPI ScriptRawMessageScoreInterface(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);

    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&&);

    MCAPI struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface&
    operator=(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const&);

    MCAPI bool operator==(struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface const& other) const;

    MCAPI ~ScriptRawMessageScoreInterface();

    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptRawMessageScoreInterface>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
