#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionModifier {
public:
    // prevent constructor by default
    ScriptDefinitionModifier& operator=(ScriptDefinitionModifier const&);
    ScriptDefinitionModifier(ScriptDefinitionModifier const&);
    ScriptDefinitionModifier();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ActorDefinitionModifier> bind();

    MCAPI static class Scripting::ClassBindingBuilder<struct ActorDefinitionModifier> bindV010();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
